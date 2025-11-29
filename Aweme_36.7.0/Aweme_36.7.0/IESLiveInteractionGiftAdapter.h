@class NSString;
@protocol IESLiveGiftFusionPlayerAdapterContextProtocol;

@interface IESLiveInteractionGiftAdapter : NSObject <IESLiveInteractionGiftAdapterRouter, IESLiveGiftFusionPlayerAdapterProtocol>

@property (retain, nonatomic) id<IESLiveGiftFusionPlayerAdapterContextProtocol> context;
@property (nonatomic) BOOL is3DSarGift;
@property (copy, nonatomic) NSString *localPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraParams;
- (void)didSetAttachingDIContext;
- (void)playTakeUntil:(id /* block */)a0;
- (void)interactGiftAnimationWillStart;
- (id)lynxPlayerHierarchy;
- (void)interactGiftAnimationDidFinish:(id)a0;
- (void)sendMessageToLynxWithEvent:(id)a0 params:(id)a1;
- (id)giftTrackerParams;
- (id)initWithAdapterContext:(id)a0;
- (void).cxx_destruct;

@end
