@class BDClassIvarInfo;

@interface IESECSliceXBasePropertyMeta : NSObject {
    BDClassIvarInfo *_ivarInfo;
    Class _ivarClass;
    Class _genericClass;
    BOOL _isCNumber;
    unsigned long long _size;
    SEL _customTransformWithValueSEL;
    void /* function */ *_customTransformWithValue;
    SEL _customSetValueSEL;
    void /* function */ *_customSetValue;
}

- (id)initWithClassInfo:(id)a0 propertyName:(id)a1;
- (void).cxx_destruct;

@end
