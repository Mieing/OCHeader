@class NSDictionary, NSArray, TPYYClassInfo;

@interface _TPYYModelMeta : NSObject {
    TPYYClassInfo *_classInfo;
    NSDictionary *_mapper;
    NSArray *_allPropertyMetas;
    NSArray *_keyPathPropertyMetas;
    NSArray *_multiKeysPropertyMetas;
    unsigned long long _keyMappedCount;
    unsigned long long _nsType;
    BOOL _hasCustomWillTransformFromDictionary;
    BOOL _hasCustomTransformFromDictionary;
    BOOL _hasCustomTransformToDictionary;
    BOOL _hasCustomClassFromDictionary;
}

+ (id)metaWithClass:(Class)a0;

- (id)initWithClass:(Class)a0;
- (void).cxx_destruct;

@end
