@class NSDictionary;

@interface IESLiveECRelatedCardPreloadRequestImpl : IESLivePreloadRequestBaseImpl

@property (retain, nonatomic) NSDictionary *ecomLiveParams;
@property (retain, nonatomic) NSDictionary *contextParams;
@property (nonatomic) unsigned long long requestStage;

+ (void)ieslivekit_register_preloadrequstAction;
+ (unsigned long long)requestBusinessIdentifier;

- (BOOL)showCart;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (unsigned long long)preloadRequestMethod;
- (id)customRequest;
- (id)ecomSceneIDStr;
- (id)p_relatedInfoDicForCardRequest;
- (void).cxx_destruct;
- (id)actionType;
- (id)roomID;
- (id)authorID;

@end
