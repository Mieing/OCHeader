@class NSString;

@interface IESECTabKitAdvancedSaaSAdapterImpl : NSObject <IESECTabKitAdvancedAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSSR;
+ (BOOL)supportAnnieXContainer;
+ (id)preProcessAnnieXCardModel:(id)a0 bid:(id)a1;
+ (id)createAnnieCardWithConfiguration:(id)a0 puzzleContext:(id)a1 lifeCycleDelegate:(id)a2 bid:(id)a3 cardBuilder:(id /* block */)a4;
+ (id)createAnnieCardWithConfiguration:(id)a0 puzzleContext:(id)a1 lifeCycleDelegate:(id)a2 bid:(id)a3 preProcessRsp:(id)a4 enableWebCache:(BOOL)a5 closeAction:(id /* block */)a6;


@end
