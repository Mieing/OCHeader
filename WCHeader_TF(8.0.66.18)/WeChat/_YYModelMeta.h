@class YYClassInfo, NSDictionary, NSArray, _YYModelPropertyMapperNode;

@interface _YYModelMeta : NSObject {
    YYClassInfo *_classInfo;
    NSDictionary *_mapper;
    NSArray *_allPropertyMetas;
    _YYModelPropertyMapperNode *_mapperNode;
    NSArray *_keyPathPropertyMetas;
    NSArray *_multiKeysPropertyMetas;
    unsigned long long _keyMappedCount;
    unsigned long long _nsType;
    BOOL _hasCustomWillTransformFromDictionary;
    BOOL _hasCustomTransformFromDictionary;
    BOOL _hasCustomTransformToDictionary;
    BOOL _hasCustomClassFromDictionary;
}

+ (id)metaWithClass:(Class)a0 configTag:(id)a1;

- (id)initWithClass:(Class)a0 configTag:(id)a1;
- (id)getParentDicOfPath:(id)a0 inDic:(id)a1 needGenerate:(BOOL)a2;
- (id)genPropertyMapperByDic:(id)a0;
- (void).cxx_destruct;

@end
