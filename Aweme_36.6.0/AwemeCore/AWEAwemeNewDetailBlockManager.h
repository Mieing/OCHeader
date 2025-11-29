@protocol AWEAwemeNewDetailBlockManagerDelegate;

@interface AWEAwemeNewDetailBlockManager : NSObject

@property (weak, nonatomic) id<AWEAwemeNewDetailBlockManagerDelegate> delegate;

- (void)setupWithDelegate:(id)a0;
- (void)playWithBlockManagerHelper:(id)a0;
- (void)onAwemeDeleted:(id)a0 isDislike:(BOOL)a1 blockManagerHelper:(id)a2;
- (void)setBottomBarHidden:(BOOL)a0 withBlockManagerHelper:(id)a1;
- (id)cellReuseIdentifierForRowWithModel:(id)a0 blockManagerHelper:(id)a1;
- (void)loadPrevious:(BOOL)a0 blockManagerHelper:(id)a1;
- (void)headerWithRefreshingBlockWithBlockManagerHelper:(id)a0;
- (void)loadMoreForOldStyleCompletionWithList:(id)a0 error:(id)a1 blockManagerHelper:(id)a2;
- (void)hasSlideToOtherFeedWithBlockManagerHelper:(id)a0;
- (BOOL)shouldPreventPauseWithBlockManagerHelper:(id)a0;
- (BOOL)closeCellPreloadWithBlockManagerHelper:(id)a0;
- (BOOL)shouldActiveInCurrentTopViewControllerWithBlockManagerHelper:(id)a0;
- (id)createHotSpotInnerBottomBarContextBlockWithBlockManagerHelper:(id)a0;
- (void).cxx_destruct;

@end
