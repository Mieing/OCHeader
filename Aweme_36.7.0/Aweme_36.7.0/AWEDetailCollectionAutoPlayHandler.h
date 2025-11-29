@class AWEDetailCollectionAutoPlayHandlerConfig, UICollectionViewCell, NSString;
@protocol AWEDetailCollectionAutoPlayableCell;

@interface AWEDetailCollectionAutoPlayHandler : NSObject <UIScrollViewDelegate>

@property (retain, nonatomic) AWEDetailCollectionAutoPlayHandlerConfig *config;
@property (weak, nonatomic) UICollectionViewCell<AWEDetailCollectionAutoPlayableCell> *currentPlayingCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPlayerHolder;
- (void)tryPlayPreOrNextCellWithCurrentModel:(id)a0;
- (id)convertedTypeCell:(id)a0;
- (BOOL)isCellLocatedInPlayableArea:(id)a0;
- (void)autoPlayIfNeeded;
- (BOOL)isCellCurrentPlayable:(id)a0;
- (id)currentAutoPlayableCell;
- (void)playCell:(id)a0;
- (void)didEndDisplayCell:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewDidDisappear;
- (void)addObservers;
- (void)viewWillDisappear;

@end
