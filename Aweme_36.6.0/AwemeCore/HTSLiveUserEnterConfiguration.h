@class NSValue, NSString;
@protocol HTSLivePluginLayoutMachineProvider;

@interface HTSLiveUserEnterConfiguration : NSObject <IESLivePublicScreenLayoutSubscriber, IESLiveGameOpenPlatformShareScreenActions>

@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> layoutProvider;
@property (nonatomic) double messageListTopHeight;
@property (nonatomic) BOOL anchorGameScreenSharing;
@property (nonatomic) double normalEnterViewHeight;
@property (nonatomic) double overlapHeight;
@property (nonatomic) long long userEnterMode;
@property (retain, nonatomic) NSValue *viewFrame;
@property (retain, nonatomic) NSValue *viewFrameFadeOut;
@property (retain, nonatomic) NSValue *viewFrameBottomEnter;
@property (retain, nonatomic) NSValue *superViewFrame;
@property (retain, nonatomic) NSValue *middleViewFrame;
@property (retain, nonatomic) NSValue *bottomViewFrame;
@property (nonatomic) double normalEnterViewSpacing;
@property (nonatomic) BOOL needResetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (BOOL)isHighValueAreaMoveDownScene;
- (void)shareScreenDidStartWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidStopWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)resetFrame;
- (void)setFrameOriginY:(double)a0;
- (void)setNormalEnterViewHeightInEcomScene:(BOOL)a0;
- (void)fragmentOrientationChanged:(long long)a0 inGame:(BOOL)a1;
- (void)willAutoRotateToOrientation:(long long)a0 inGame:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
