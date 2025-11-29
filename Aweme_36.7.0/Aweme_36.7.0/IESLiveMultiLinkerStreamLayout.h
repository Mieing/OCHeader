@class NSString, HTSInteractionStreamAppData, HTSInteractStreamRegion, NSMutableArray;
@protocol IESLiveMultiLinkerProvider;

@interface IESLiveMultiLinkerStreamLayout : NSObject <IESLiveInteractiveStreamLayout, IESLiveRevenueInteractSingleViewLayoutCalculator>

@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> provider;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSizeHorizontalInAudience;
@property (retain, nonatomic) NSMutableArray *streamRegions;
@property (nonatomic) long long sessionsCount;
@property (retain, nonatomic) NSMutableArray *clipLayoutRegions;
@property (retain, nonatomic) HTSInteractStreamRegion *gameClip;
@property (retain, nonatomic) HTSInteractStreamRegion *cameraClip;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastStreamCropRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (id)userService;
- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)appDataWithUserService:(id)a0;
- (id)streamRegionByLayoutRegion:(id)a0;
- (id)preprocessSessions:(id)a0 userService:(id)a1;
- (BOOL)isHorizontalInScreenshot;
- (BOOL)hasAiAssistant;
- (BOOL)singleViewOptEnabled;
- (BOOL)canUpdateStreamLayout:(id)a0;
- (id)packageLayoutRegionsOfSessions:(id)a0;
- (void)updateStreamCropRegionIfNeeded;
- (id)singleLayoutWithSessions:(id)a0;
- (id)doubleLayoutWithSessions:(id)a0;
- (id)dynamicLayoutWithSessions:(id)a0 frames:(id)a1;
- (id)trebleLayoutWithSessions:(id)a0;
- (id)quadrupleLayoutWithSessions:(id)a0;
- (void)largeLayoutWithSession:(id)a0 smallSessionsCount:(long long)a1 index:(double)a2 largedUserId:(BOOL)a3;
- (void)updateGameClip:(id)a0 muteAudio:(BOOL)a1;
- (void)updateCameraClip:(id)a0 muteAudio:(BOOL)a1;
- (BOOL)isInScreenshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamCropRegion;
- (void).cxx_destruct;

@end
