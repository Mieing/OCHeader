@class NSString;
@protocol IESLiveContainerRouter;

@interface IESLiveECRouterIESECBridger : NSObject <IESLiveECRouter>

@property (retain, nonatomic) id<IESLiveContainerRouter> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)openSchema:(id)a0;
- (void)openSchema:(id)a0 fromInside:(BOOL)a1;
- (void).cxx_destruct;

@end
