@class NSMutableDictionary, NSArray, HTSInteractionStreamAppData, NSString;
@protocol IESLivePKProvider;

@interface IESLivePKStreamLayout : NSObject <IESLiveInteractiveStreamLayout, IESLiveRevenueInteractSingleViewLayoutCalculator>

@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) NSMutableDictionary *emptyViewPixelBuffers;
@property (nonatomic) long long currentSlotNum;
@property (nonatomic) long long oppositeSlotNum;
@property (weak, nonatomic) id<IESLivePKProvider> provider;
@property (nonatomic) BOOL hasOppoGrid;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastStreamCropRegion;
@property (nonatomic) BOOL ignoreEmptySlotUpdate;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (copy, nonatomic) NSArray *guestFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)onPKFinish;
- (float)calculateHeight:(float)a0;
- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)appDataWithUserService:(id)a0;
- (id)streamRegionByLayoutRegion:(id)a0;
- (BOOL)singleViewOptEnabled;
- (void)updateStreamCropRegionIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamCropRegion;
- (void)stopMixStreamBackground;
- (void)updateMixStreamBackgroundIfNeed;
- (id)currentGuestGrids;
- (void)clearGuestEmptyView:(BOOL)a0;
- (BOOL)roomHasGuest:(id)a0 isOpposite:(BOOL)a1;
- (void)setupLayoutRegion:(id)a0 withConfigRegion:(id)a1;
- (void)updateGuestLayoutOfPublisher:(id)a0 withSessions:(id)a1 regions:(id)a2 grids:(id)a3 currentAnchor:(id)a4 oppositeAnchor:(id)a5 guestH:(double)a6;
- (void)updateForFishEyeAnchor:(id)a0 currentAnchor:(id)a1 oppositeAnchor:(id)a2 appDataDic:(id)a3;
- (id)configRegionWithPosition:(long long)a0;
- (void)setupGuestFramesIfNeeded:(double)a0 guestH:(double)a1;
- (long long)slotWithPositionX:(double)a0 emptySlot:(long long)a1;
- (void)didUpdateGuestSession:(long long)a0 oppositeEmptySlot:(long long)a1;
- (void)startMixStreamBackgroundWith:(id)a0 downImage:(id)a1;
- (void).cxx_destruct;

@end
