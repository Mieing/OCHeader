@class NSString, AWEAwemeModel, AWEGCPCommentTabViewModel, AWEGCPCommentTabView;

@interface AWEGCPCommentTabController : UIViewController <AWEGCPCommentTabViewDelegate, IESGCPDIContextSubscriber, AWEGCPCommentTabControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEGCPCommentTabView *commentTabView;
@property (retain, nonatomic) AWEGCPCommentTabViewModel *viewModel;
@property (nonatomic) BOOL isFirstRender;
@property (nonatomic) BOOL isActive;
@property (nonatomic) double tabShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ scrollViewDidUpdate;
@property (copy, nonatomic) NSString *actionWay;

- (void)commentThemeChanged;
- (id)initWithAwemeModel:(id)a0;
- (void)makeViewTrackNode;
- (void)scrollViewDidUpdate:(id)a0;
- (void)didSetGameCPDIContext;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
