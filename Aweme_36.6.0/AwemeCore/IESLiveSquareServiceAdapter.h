@class NSString, NSMutableSet, NSMutableArray, IESLiveInnerFeedContext;

@interface IESLiveSquareServiceAdapter : NSObject <IESLiveSquareService, IESLiveInnerFeedDisplayAction, IESLiveInnerFeedDataControlAction, IESLiveSlideControlService>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) long long scrollCount;
@property (retain, nonatomic) NSMutableSet *itemIds;
@property (nonatomic) BOOL isAutoSlideToNext;
@property (nonatomic) BOOL isClickSlideToNext;
@property (nonatomic) BOOL isFromNextEpisodeIcon;
@property (nonatomic) BOOL clickPositionSetting;
@property (copy, nonatomic) NSString *drapUpStatus;
@property (retain, nonatomic) NSMutableArray *attachObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)didSetAttachingDIContext;
- (void)setCurrentRoomAttachContext:(id)a0;
- (id)roomAisle;
- (BOOL)isInnerFeed;
- (BOOL)cellEnterWithDraw;
- (long long)scrollLiveCellCount;
- (long long)mountedCellCount;
- (id)squareViewController;
- (id)squareContainer;
- (BOOL)noLastIndex;
- (BOOL)verticalGuideShowing;
- (void)showSwipeGuide;
- (void)showLandscapeSwipeGuide;
- (void)showProbeSwipeGuideWithTitle:(id)a0;
- (void)dismissLandscapeSwipeGuide;
- (BOOL)canSwipeVertical;
- (id)currentLiveRoomModel;
- (id)nextLiveRoomModel;
- (id)realNextLiveRoomModel;
- (id)slideDI;
- (void)attachObject:(id)a0;
- (void)swipeToIndex:(long long)a0 animation:(BOOL)a1;
- (void)innerFeedWillBeginDragging:(id)a0;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void)innerFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedDataDidChangeWithType:(unsigned long long)a0 datas:(id)a1 hasMore:(BOOL)a2 success:(BOOL)a3;
- (unsigned long long)currentSlideDirection;
- (BOOL)hasNextRoomWithDirection:(unsigned long long)a0;
- (BOOL)slideToNextRoomWithDirection:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)vsAutoPlayNext:(BOOL)a0;
- (BOOL)nextVSisVertical;
- (void)checkAndShowNoMoreMessageIfNeeded;
- (void)trackDrawMoveActionUp:(BOOL)a0;
- (long long)currentIndex;
- (id)models;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithContext:(id)a0;
- (id)currentRoom;

@end
