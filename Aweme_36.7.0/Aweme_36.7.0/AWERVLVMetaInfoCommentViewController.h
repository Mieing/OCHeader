@class AWEAwemeModel, AWERVDetailPageContext, NSString, UITableView, UIPanGestureRecognizer, AWERelatedVideoDetailVideoCommentViewController, AWELVideoAlbumInfoModel, UILabel, UIScrollView;

@interface AWERVLVMetaInfoCommentViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) UITableView *metaTableView;
@property (retain, nonatomic) AWERelatedVideoDetailVideoCommentViewController *commentVC;
@property (retain, nonatomic) UILabel *commentTitle;
@property (retain, nonatomic) UIPanGestureRecognizer *gestureCheckRecoginizer;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ didCreateInputView;
@property (copy, nonatomic) id /* block */ didHideInputView;
@property (copy, nonatomic) id /* block */ willHideInputView;
@property (copy, nonatomic) id /* block */ didShowInputView;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInputView;
- (void)refreshModel:(id)a0 params:(id)a1;
- (void)albumInfoDidLoad:(BOOL)a0;
- (void)scrollToComment;
- (void)refreshCommentViewWithModel:(id)a0 params:(id)a1;
- (void)refreshMetaInfoWithModel:(id)a0 params:(id)a1;
- (void)onCommentScrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)updateTitle;

@end
