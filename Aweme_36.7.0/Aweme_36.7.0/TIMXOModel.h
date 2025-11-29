@class TIMXSDKInstance, NSConditionLock;

@interface TIMXOModel : MTLModel {
    TIMXSDKInstance *_r;
}

@property (nonatomic) unsigned long long cachedBehaviourType;
@property (readonly, nonatomic) NSConditionLock *buildUpLock;
@property (nonatomic) BOOL isInvalided;
@property (readonly, nonatomic) BOOL isDefaultTargetInstance;
@property (readonly, nonatomic) BOOL isDouYinTargetInstance;
@property (readonly, nonatomic) BOOL isECOMTargetInstance;

+ (id)cachedInstanceWithRootObject:(id)a0 identifier:(id)a1;
+ (void)removeCachedInstanceWithRootObject:(id)a0 identifier:(id)a1;

- (id)initWithRootObject:(id)a0 identifier:(id)a1;
- (void)setupPropertyWithBlock:(id /* block */)a0;
- (id)initEmptyNoCacheInstanceWithRootObject:(id)a0;
- (void).cxx_destruct;
- (id)db;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
