@class HTSEventContext, NSString, IESLivePopupItem, UIView;
@protocol IESLiveRoomService, IESLiveSpeedPerformancePushDelegate;

@interface IESLiveSpeedPerformancePushManager : NSObject <IESLiveDynamicViewDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) UIView *hybridView;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (copy, nonatomic) NSString *pushIdentifier;
@property (weak, nonatomic) id<IESLiveSpeedPerformancePushDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (void)viewDidFinishLoad;
- (void)viewDidLoadFailedWithError:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)toastCancelAutoChange;
- (void)pushWithPerformanceLevel:(long long)a0 riskLevel:(long long)a1;
- (void)showPushGuide;
- (void)speedModeChangeSucceed;
- (void)trackPushGuideEvent:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
