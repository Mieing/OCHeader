@class WCFinderPostSessionModel, WCFinderCoverEditViewController, NSString, UIScrollView, WCFinderHoriPreviewCardView;
@protocol WCFinderCoverHoriPreviewViewControllerDelegate;

@interface WCFinderCoverHoriPreviewViewController : MMUIViewController <WCFinderHoriPreviewCardViewDelegate, WCFinderCoverEditViewControllerDelegate>

@property (retain, nonatomic) WCFinderPostSessionModel *postSession;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WCFinderHoriPreviewCardView *personalCardView;
@property (retain, nonatomic) WCFinderHoriPreviewCardView *shareCardView;
@property (retain, nonatomic) WCFinderCoverEditViewController *personalCoverVC;
@property (retain, nonatomic) WCFinderCoverEditViewController *shareCoverVC;
@property (nonatomic) BOOL hasChooseCoverUrl;
@property (nonatomic) BOOL alreadyShowReuseAlert;
@property (weak, nonatomic) id<WCFinderCoverHoriPreviewViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPostSession:(id)a0;
- (void)viewDidLoad;
- (void)setupNaviContent;
- (void)setupCardViews;
- (void)onClickPreviewBtn;
- (void)downloadImagesAndOpenLiteApp:(id)a0 mediaInfo:(id)a1 completionBlock:(id /* block */)a2;
- (void)openLiteAppWithMediaInfo:(id)a0;
- (void)setupCoverVCByStyle:(unsigned long long)a0;
- (id)getCurrentCoverVCByStyle:(unsigned long long)a0;
- (void)onHoriPreviewCardClickEditButton:(unsigned long long)a0;
- (BOOL)_shouldRestartCoverEditWithStyle:(unsigned long long)a0;
- (BOOL)_shouldRestartCoverEditWithCoverVC:(id)a0;
- (void)_updateVideoPreviewViewWithCoverVC:(id)a0 style:(unsigned long long)a1;
- (void)onCoverEditDidAppear:(id)a0;
- (void).cxx_destruct;

@end
