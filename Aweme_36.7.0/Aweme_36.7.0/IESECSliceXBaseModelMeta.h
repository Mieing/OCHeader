@class BDClassInfo, NSDictionary, NSSet;

@interface IESECSliceXBaseModelMeta : NSObject {
    BDClassInfo *_classInfo;
    NSDictionary *_jsonKeyWithPropertyKey;
    NSDictionary *_propertyMetas;
    NSSet *_baseModelProperties;
}

- (void).cxx_destruct;
- (id)initWithClass:(Class)a0;

@end
