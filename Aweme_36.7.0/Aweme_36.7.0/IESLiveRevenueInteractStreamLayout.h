@class NSArray, NSString, HTSInteractionStreamAppData, HTSInteractStreamRegion, NSMutableArray, NSMutableDictionary;
@protocol IESLiveRevenueInteractLinkerProvider, IESLiveRevenueInteractSingleViewService;

@interface IESLiveRevenueInteractStreamLayout : NSObject <IESLiveInteractiveStreamLayout, IESLiveRevenueInteractSingleViewLayoutCalculator>

@property (weak, nonatomic) id<IESLiveRevenueInteractLinkerProvider> provider;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSizeHorizontalInAudience;
@property (retain, nonatomic) NSMutableArray *streamRegions;
@property (retain, nonatomic) NSArray *originStreamRegions;
@property (nonatomic) long long sessionsCount;
@property (retain, nonatomic) NSMutableArray *clipLayoutRegions;
@property (retain, nonatomic) HTSInteractStreamRegion *gameClip;
@property (retain, nonatomic) HTSInteractStreamRegion *cameraClip;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (copy, nonatomic) NSString *lastMetaSEIStr;
@property (nonatomic) long long currentSlotNum;
@property (nonatomic) long long oppositeSlotNum;
@property (nonatomic) BOOL ignoreEmptySlotUpdate;
@property (retain, nonatomic) NSMutableDictionary *emptyViewPixelBuffers;
@property (nonatomic) BOOL userServerPosition;
@property (retain, nonatomic) id<IESLiveRevenueInteractSingleViewService> singleViewService;
@property (copy, nonatomic) NSArray *guestFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (id)userService;
- (void)onPKFinish;
- (float)calculateHeight:(float)a0;
- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)appDataWithUserService:(id)a0;
- (BOOL)hasGuest;
- (id)streamRegionByLayoutRegion:(id)a0;
- (id)preprocessSessions:(id)a0 userService:(id)a1;
- (BOOL)isHorizontalInScreenshot;
- (BOOL)hasAiAssistant;
- (id)packageLayoutRegionsOfSessions:(id)a0;
- (id)singleLayoutWithSessions:(id)a0;
- (id)doubleLayoutWithSessions:(id)a0;
- (id)dynamicLayoutWithSessions:(id)a0 frames:(id)a1;
- (void)largeLayoutWithSession:(id)a0 smallSessionsCount:(long long)a1 index:(double)a2 largedUserId:(BOOL)a3;
- (void)updateGameClip:(id)a0 muteAudio:(BOOL)a1;
- (void)updateCameraClip:(id)a0 muteAudio:(BOOL)a1;
- (BOOL)isInScreenshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamCropRegion;
- (void)clearGuestEmptyView:(BOOL)a0;
- (void)setupLayoutRegion:(id)a0 withConfigRegion:(id)a1;
- (void)updateGuestLayoutOfPublisher:(id)a0 withSessions:(id)a1 regions:(id)a2 grids:(id)a3 currentAnchor:(id)a4 oppositeAnchor:(id)a5 guestH:(double)a6;
- (void)updateForFishEyeAnchor:(id)a0 currentAnchor:(id)a1 oppositeAnchor:(id)a2 appDataDic:(id)a3;
- (id)configRegionWithPosition:(long long)a0;
- (void)setupGuestFramesIfNeeded:(double)a0 guestH:(double)a1;
- (long long)slotWithPositionX:(double)a0 emptySlot:(long long)a1;
- (void)didUpdateGuestSession:(long long)a0 oppositeEmptySlot:(long long)a1;
- (void)updateServerPositonFlag:(id)a0;
- (void)p_sendStreamSEIMessage;
- (void).cxx_destruct;

@end
