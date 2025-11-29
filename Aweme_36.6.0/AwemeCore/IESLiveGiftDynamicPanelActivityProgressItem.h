@class NSString, RACReplaySubject, IESLiveGiftPanelDataSharing;
@protocol IESLiveSubscription;

@interface IESLiveGiftDynamicPanelActivityProgressItem : NSObject <IESLiveGiftDynamicPanelActivityProgressRPCService, IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) NSString *currentRecivierUid;
@property (retain, nonatomic) id<IESLiveSubscription> recivierChangeDisposiable;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) RACReplaySubject *giftPanelTopBarPublisher;
@property (copy, nonatomic) id /* block */ messageUpdateBlockWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)lynxData;
- (id)currentUid;
- (void)updateWithUid:(id)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)sendGiftPanelTopBarWithMessage:(id)a0;
- (id)observeGiftPanelTopBar;
- (void)sendCurrentTouchMessage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
