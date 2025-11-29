@class AWECommentBookScoreViewController, NSDictionary, NSString;
@protocol AWECommentBookScoreViewControllerProtocol, AWECommentBookScoreManagerDelegate;

@interface AWECommentBookScoreManager : NSObject <AWECommentBookScoreDelegate, AFDBookCommentManagerProtocol>

@property (retain, nonatomic) AWECommentBookScoreViewController *bookScoreViewController;
@property (retain, nonatomic) NSDictionary *singleDict;
@property (retain, nonatomic) NSDictionary *finalDict;
@property (weak, nonatomic) id<AWECommentBookScoreViewControllerProtocol> scoreParentViewController;
@property (nonatomic) BOOL displayingScoreView;
@property (nonatomic) BOOL isUpdate;
@property (weak, nonatomic) id<AWECommentBookScoreManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (void)showScoreViewController;
- (void)dismissScoreViewController;
- (float)getBookScore;
- (BOOL)getBookCommentForwardState;
- (void)clearBookScoreViewState;
- (void)loadBookScoreLottieSource;
- (void)setBookParams:(id)a0 bookRating:(float)a1 isUpdate:(BOOL)a2;
- (void)resetBookScoreViewFrameLimited;
- (void)getLottieSource;
- (void)bookScoreViewClosed;
- (void).cxx_destruct;

@end
