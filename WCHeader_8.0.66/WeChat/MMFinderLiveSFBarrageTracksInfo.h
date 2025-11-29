@class NSArray, NSMutableArray, MMFinderLiveSFBarrageItemInfo;

@interface MMFinderLiveSFBarrageTracksInfo : NSObject

@property (retain, nonatomic) NSArray *trackPositionYPercentList;
@property (retain, nonatomic) NSMutableArray *allTracksInfo;
@property (retain, nonatomic) NSMutableArray *allBarrageList;
@property (retain, nonatomic) MMFinderLiveSFBarrageItemInfo *currentTappedBarrageItem;
@property (retain, nonatomic) NSMutableArray *listOfBarrageAfterTapped;
@property (nonatomic) double barrageContentWidth;
@property (nonatomic) double barrageContentHeight;
@property (nonatomic) unsigned long long trackCount;
@property (copy, nonatomic) id /* block */ invokeReRunBlock;
@property (copy, nonatomic) id /* block */ hasBarrageMovingAtTrackCallback;

- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 trackPosYPercentList:(id)a1;
- (void)configBarrageTrackInfos;
- (id)createSingleTrack:(double)a0;
- (void)updateBarrageTrackInfosPositionY;
- (id)getCurrentVisibleSortedBarrageItemList;
- (BOOL)hasAvailableTrackInfo;
- (void)updateTrackPositionYPercentList:(id)a0;
- (void).cxx_destruct;

@end
