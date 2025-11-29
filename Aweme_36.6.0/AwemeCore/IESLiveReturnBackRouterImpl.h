@class NSMutableArray, IESLiveEnterRoomAisle, NSString, NSNumber, HTSLiveRoom, IESLiveReturnBackIndicatorView, IESLiveReturnBackStore;
@protocol HTSLiveViewHierarchyProvider, IESLiveSearchActions, IESLiveContainerRouter, IESLiveSquareService, IESLiveTrackerSegue;

@interface IESLiveReturnBackRouterImpl : NSObject <IESLiveReferenceActions, IESLiveReturnBackRouter>

@property (retain, nonatomic) IESLiveReturnBackIndicatorView *indicatorView;
@property (retain, nonatomic) IESLiveReturnBackStore *store;
@property (retain, nonatomic) id<IESLiveSquareService> squareService;
@property (retain, nonatomic) id<HTSLiveViewHierarchyProvider> viewProvider;
@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (retain, nonatomic) id<IESLiveSearchActions> searchDispatcher;
@property (retain, nonatomic) IESLiveEnterRoomAisle *firstRoomAisle;
@property (retain, nonatomic) id<IESLiveTrackerSegue> firstSegue;
@property (nonatomic) unsigned long long returnBackStyle;
@property (retain, nonatomic) NSMutableArray *backStores;
@property (retain, nonatomic) IESLiveReturnBackStore *storeFromBackStores;
@property (nonatomic) BOOL skipCountLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *roomID;
@property (readonly, nonatomic) HTSLiveRoom *backRoom;
@property (readonly, nonatomic) unsigned long long path;

+ (id)shared;

- (id)attachingDIContext;
- (BOOL)canRecord:(unsigned long long)a0;
- (id /* block */)recordAsyncPath:(unsigned long long)a0 forRoom:(id)a1;
- (void)recordPath:(unsigned long long)a0 forRoom:(id)a1 result:(id)a2;
- (BOOL)canReturnBack:(id)a0;
- (BOOL)isReturnBackViewShowing;
- (void)clearStack;
- (BOOL)canReturnBack;
- (void)returnBack;
- (void)recordEnterWithSmallWindow:(id)a0;
- (id)renderIndicatorView:(id)a0;
- (id)renderIndicatorViewWithTrackContext:(id)a0 clickAction:(id /* block */)a1;
- (double)returnBackIndicatorViewWidth;
- (void)hideIndicatorIfShowing;
- (void)didLeaveAudienceRoom;
- (id /* block */)recordRoomAisle:(id)a0;
- (void)recordPath:(unsigned long long)a0 forRoom:(id)a1;
- (void)processResult:(id)a0 forRoom:(id)a1;
- (void)trackLiveShow:(id)a0;
- (void)replace:(id)a0 byCurrent:(id)a1 navigationController:(id)a2;
- (void)trackRecLivePlay:(id)a0;
- (id)currentBannerType;
- (id)p_trackNameOfvsType:(int)a0;
- (double)timeForKey:(id)a0 defaultValue:(double)a1;
- (double)newTimeForKey:(id)a0 defaultValue:(double)a1;
- (void)returnBackAction:(double)a0 trackContext:(id)a1;
- (BOOL)canRecordRoomAisle:(id)a0;
- (BOOL)p_vsEnableUseReturnBack;
- (void)processResult:(id)a0 store:(id)a1;
- (BOOL)hasBeenRecordVS:(id)a0;
- (BOOL)hasBeenRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearStore;

@end
