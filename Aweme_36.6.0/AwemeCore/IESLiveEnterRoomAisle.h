@class IESLiveEnterRoomContext, IESLiveEnterRoomTraceContext, HTSLiveRoom, IESLiveInteractionLayout, IESLiveMultiEnterPreloadConfig, UIViewController, HTSLiveAsyncResult, NSString, HTSEventContext, IESLiveEnterRoomBusinessParamsArray, IESLiveEnterRoomBusinessContext, NSArray, IESLiveEnterRoomActionInjection, IESLiveEnterRoomEventPramas, NSNumber, IESLiveVideoPlayerController;
@protocol IESLiveDIContext, IESLivePlayerProtocol;

@interface IESLiveEnterRoomAisle : NSObject

@property (retain, nonatomic) IESLiveEnterRoomActionInjection *injection;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSArray *directEnterBlockList;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *actionType;
@property (weak, nonatomic) UIViewController *sourceController;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSLiveRoom *originRoom;
@property (retain, nonatomic) NSArray *rooms;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *secAnchorID;
@property (nonatomic) BOOL isFeedEnterRoom;
@property (copy, nonatomic) id /* block */ audienceControllerReuseBlock;
@property (retain, nonatomic) IESLiveEnterRoomEventPramas *eventParams;
@property (retain, nonatomic) IESLiveEnterRoomBusinessParamsArray *businessParams;
@property (retain, nonatomic) IESLiveEnterRoomBusinessContext *businessContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (retain, nonatomic) IESLiveMultiEnterPreloadConfig *enterPreloadConfig;
@property (retain, nonatomic) IESLiveEnterRoomTraceContext *enterTrace;
@property (retain, nonatomic) IESLiveEnterRoomContext *roomContext;
@property (retain, nonatomic) HTSLiveAsyncResult *result;
@property (weak, nonatomic) UIViewController *targetController;
@property (nonatomic) BOOL enableReplay;
@property (nonatomic) double realEnterStartTime;
@property (nonatomic) long long lifeState;
@property (copy, nonatomic) id /* block */ requestOutterPlayerReuseBlock;
@property (retain, nonatomic, setter=setcurrentDIContext:) id<IESLiveDIContext> currentDIContext;
@property (retain, nonatomic, setter=setplayer:) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic, setter=setvideoPlayer:) IESLiveVideoPlayerController *videoPlayer;
@property (weak, nonatomic) id ktvPreStreamContext;
@property (retain, nonatomic, setter=setgeneralServiceManager:) id generalServiceManager;
@property (retain, nonatomic) IESLiveInteractionLayout *preStreamEnterRoomLayout;
@property (copy, nonatomic) NSArray *preStreamEnterRoomUserList;
@property (nonatomic) BOOL joinChorus;

- (BOOL)canDirectEnterLiveRoom;
- (id)monitorContext;
- (BOOL)isAcquaintanceRoom;
- (id)enteredRoomOwnerID;
- (BOOL)isVSLiveRoom;
- (BOOL)isVSFirstPlayRoom;
- (BOOL)canEnterVSRoom;
- (id)generateLogInfo;
- (BOOL)fromVSRoomDrawer;
- (void)cancelRoomAisle;
- (void)monitorAddStampWithName:(id)a0;
- (BOOL)canVSLandscape2Landscape;
- (BOOL)isLandscapeEnterLive;
- (BOOL)islegal;
- (id)privateRoomID;
- (id)initWithTraceStart:(BOOL)a0;
- (void)setUpMonitor;
- (BOOL)shouldCancelNewRoomAisle:(id)a0;
- (BOOL)canEnterVSRoomOpt;
- (void).cxx_destruct;
- (BOOL)isCanceled;
- (id)init;
- (void)dealloc;

@end
