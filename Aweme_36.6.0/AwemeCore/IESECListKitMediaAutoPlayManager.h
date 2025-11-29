@class NSString, IESECListKitBFFViewController, NSMutableArray;
@protocol IESECListKitCellModelProtocol;

@interface IESECListKitMediaAutoPlayManager : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) id<IESECListKitCellModelProtocol> playingCellModel;
@property (weak, nonatomic) id<IESECListKitCellModelProtocol> secondPlayingCellModel;
@property (weak, nonatomic) IESECListKitBFFViewController *bffVC;
@property (retain, nonatomic) NSMutableArray *playerQueue;
@property (retain, nonatomic) NSMutableArray *playerAutoPlayStatusQueue;
@property (nonatomic) BOOL isScrollStopped;
@property (nonatomic) BOOL mallFeedAutoPlayLogicOpt;
@property (nonatomic) double cardPlayTopVisiblePercent;
@property (nonatomic) BOOL playWithSecondCard;
@property (nonatomic) BOOL mallFeedLGAutoPlayLogicOpt;
@property (nonatomic) BOOL enableThirdPlayableCardPlayFirst;
@property (nonatomic) BOOL enablePlayWhileSliding;
@property (nonatomic) BOOL fixHalfScreen;
@property (nonatomic) BOOL cacheDataDisableAutoplay;
@property (nonatomic) double autoPlayWindowRatio;
@property (nonatomic) double cellRatio;
@property (nonatomic) BOOL cellAutoPlayUnderHalfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVC:(id)a0;
- (BOOL)canPlayWithSecondCard;
- (void)playVisibleCellIfNeed;
- (void)stopCurrentPlayer;
- (id)firstPlayableCellModel;
- (void)updatePlayingCellModel:(id)a0;
- (id)firstPlayableCell;
- (BOOL)mediaCellIsPlaying:(id)a0;
- (unsigned long long)shouldPlay:(id)a0;
- (void)stopWithCellModel:(id)a0;
- (void)playNextTwoCard;
- (void)playWithCellModel:(id)a0 autoPlayDuration:(long long)a1;
- (void)playTwoCardNextWithCellModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCellModelBoundsInBFFVC:(id)a0;
- (BOOL)cellModelHasAutoPlayed:(id)a0;
- (void)setCellModelHasAutoPlayed:(id)a0 hasAutoPlayed:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)playNext;

@end
