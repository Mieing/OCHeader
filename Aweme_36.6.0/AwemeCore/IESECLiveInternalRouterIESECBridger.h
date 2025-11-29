@class NSString;
@protocol IESLiveInternalRouter;

@interface IESECLiveInternalRouterIESECBridger : NSObject <IESECLiveInternalRouter>

@property (retain, nonatomic) id<IESLiveInternalRouter> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)openPopupHybridViewWithURL:(id)a0 eventParams:(id)a1 isLynx:(BOOL)a2 fromBottom:(BOOL)a3;
- (void).cxx_destruct;

@end
