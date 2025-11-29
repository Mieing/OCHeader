@class IESLiveGuideModel, HTSEventContext, IESLiveRecordStateApi;
@protocol IESLiveRoomService, IESLiveScreenshotHub;

@interface IESLiveScreencastStartStore : NSObject

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveScreenshotHub> hub;
@property (nonatomic) long long startState;
@property (retain, nonatomic) IESLiveRecordStateApi *stateApi;

- (void)didSetAttachingDIContext;
- (void)bindXLiveObserveActions;
- (id)appSchemeUrl;
- (id)initWithGuideModel:(id)a0 trackContext:(id)a1;
- (BOOL)startLiveWithRoom:(id)a0;
- (void)handleEnterRoomSuccess;
- (BOOL)cancelLive;
- (void)reportSystemGuideViewShow;
- (void)reportExtensionLaunchedBeforeLive;
- (void).cxx_destruct;
- (id)extensionBundleID;
- (void)addObserver;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
