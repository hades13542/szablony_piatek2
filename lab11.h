#define METER 100

template <int T>
class Float_t{
public:	
	Float_t(float a):_value(a){}
	inline int Get(){return _value;}
	Float_t <T> operator +(Float_t<T>& a ){return this->Get()+a.Get();}
	template <int Y>
	Float_t <Y+T> operator *(Float_t<Y>& a){return this->Get()*a.Get();}
private:
	float _value;
};
