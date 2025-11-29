@class NSString;
@protocol PreviewContentViewControllerDelegate;

@interface PreviewContentViewController : BaseMsgContentViewController

@property (retain, nonatomic) NSString *curAuthorID;
@property (weak, nonatomic) id<PreviewContentViewControllerDelegate> m_previewContentVCDelegate;

- (void)viewDidLoad;
- (void)tapAppNodeView:(id)a0;
- (id)getLeftBarButton;
- (void)viewDidAppear:(BOOL)a0;
- (void)ReloadView;
- (void)viewDidBePoped:(BOOL)a0;
- (void)autoClickPreviewBubble;
- (void).cxx_destruct;

@end
