@class NSString, AWEAwemeModel, UIView, AWERVLVMetaInfoCommentViewController;
@protocol AWECommentInputViewProtocol;

@interface AWERVLVMetaInfoCommentPanelViewModel : AWERVLVBasePanelViewModel <AWERVLVRightPanelProtocol>

@property (retain, nonatomic) AWERVLVMetaInfoCommentViewController *metaCommentVC;
@property (retain, nonatomic) UIView<AWECommentInputViewProtocol> *commentInputView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInputView;
- (id)panelID;
- (id)panelVC;
- (void)trackCommentButtonClick:(id)a0;
- (void)refreshModel:(id)a0 params:(id)a1;
- (void)albumInfoDidLoad:(BOOL)a0;
- (void)panelDidLoad;
- (id)rightPanelTitle;
- (double)rightPanelTopPadding;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupContext;

@end
