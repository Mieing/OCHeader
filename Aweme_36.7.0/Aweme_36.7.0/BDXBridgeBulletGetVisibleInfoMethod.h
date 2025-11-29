@protocol AnnieXContainerBaseProtocol;

@interface BDXBridgeBulletGetVisibleInfoMethod : BDXBridgeMethod

@property (weak, nonatomic) id<AnnieXContainerBaseProtocol> container;

+ (id)metaInfo;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;

@end
