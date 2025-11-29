@protocol BDXContainerProtocol;

@interface BDXBridgeBulletStartRecordMethod : BDXBridgeMethod

@property (weak, nonatomic) id<BDXContainerProtocol> container;

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
