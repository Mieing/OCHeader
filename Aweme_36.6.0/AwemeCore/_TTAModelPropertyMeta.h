@class NSString, NSArray, TTAClassPropertyInfo;

@interface _TTAModelPropertyMeta : NSObject {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _nsType;
    BOOL _isCNumber;
    Class _cls;
    Class _genericCls;
    SEL _getter;
    SEL _setter;
    BOOL _isKVCCompatible;
    BOOL _isStructAvailableForKeyedArchiver;
    BOOL _hasCustomClassFromDictionary;
    NSString *_mappedToKey;
    NSArray *_mappedToKeyPath;
    NSArray *_mappedToKeyArray;
    TTAClassPropertyInfo *_info;
    _TTAModelPropertyMeta *_next;
}

+ (id)metaWithClassInfo:(id)a0 propertyInfo:(id)a1 generic:(Class)a2;

- (void).cxx_destruct;

@end
