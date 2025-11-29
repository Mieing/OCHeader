@class UIView, AWENewVideoCoverEditAddTextView, AWENewVideoImageTemplateListView, AWEVideoCoverTextTabContainerView, AWENewVideoCoverTextTemplateContainerView, AWEVideoCoverImageTemplateListView, UIButton, AWENewVideoCoverEditTemplateViewModel, AWEVideoPublishViewModel, AWEVideoCoverTextTabContext, DUXAlertDialog;
@protocol AWEVideoCoverImageTemplateListViewDelegate, AWENewVideoCoverEditTemplateTextDelegate, AWEImageTemplateListViewDelegate;

@interface AWENewVideoCoverEditTemplateContainerView : UIView

@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIButton *templateButton;
@property (retain, nonatomic) UIButton *textButton;
@property (retain, nonatomic) UIView *templateContainerView;
@property (retain, nonatomic) AWENewVideoCoverEditAddTextView *addTextView;
@property (retain, nonatomic) AWENewVideoCoverTextTemplateContainerView *textTemplatedContainerView;
@property (retain, nonatomic) AWEVideoCoverTextTabContainerView *textTabView;
@property (retain, nonatomic) AWENewVideoCoverEditTemplateViewModel *viewModel;
@property (retain, nonatomic) AWENewVideoImageTemplateListView *templateListView;
@property (weak, nonatomic) id<AWEImageTemplateListViewDelegate> templateDelegate;
@property (retain, nonatomic) AWEVideoCoverImageTemplateListView *videoCoverTemplateListView;
@property (weak, nonatomic) id<AWEVideoCoverImageTemplateListViewDelegate> videoCoverTemplateDelegate;
@property (weak, nonatomic) id<AWENewVideoCoverEditTemplateTextDelegate> textDelegate;
@property (nonatomic) double templateStartLoadingStamp;
@property (nonatomic) BOOL isShowingTemplate;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) DUXAlertDialog *failedAlert;
@property (nonatomic) long long insertTemplateAtFirstRequestCount;
@property (retain, nonatomic) AWEVideoCoverTextTabContext *textTabContext;

- (void)configViewModel;
- (void)trackCoverEnterTabWithTabName:(id)a0;
- (void)startFetchTemplateListData;
- (void)applyTemplateSuccess;
- (void)alertApplyTemplateFailedWithAction:(id /* block */)a0 cancel:(id /* block */)a1;
- (void)applyTemplateFail;
- (BOOL)useVideoCoverImageTemplate;
- (void)updateCurrentSticker:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishViewModel:(id)a1 viewModel:(id)a2 templateDelegate:(id)a3 textDelegate:(id)a4;
- (void)updateCurrentStickerWithContent:(id)a0;
- (void)showChooseTextInfo;
- (void)textShowChooseStyle;
- (void)updateCurrentNLELayerView:(id)a0;
- (void)showAddText;
- (BOOL)hideCoverTemplate;
- (void)onTemplateAction:(id)a0;
- (BOOL)isDefaultEditorStyle;
- (void)fetchImageFeatureAndTemplateList;
- (void)textTemplateUpdateChooseEffect:(id)a0;
- (void)textTemplateUpdateWithResourceId:(id)a0 effectId:(id)a1;
- (void)onTextTemplateAction:(id)a0;
- (void)changeButton:(id)a0 state:(BOOL)a1;
- (void)showChooseTemplate;
- (void)showChooseText;
- (id)bottomButton:(id)a0 action:(SEL)a1;
- (long long)currentEditorStyle;
- (void)imageTemplateUpdateChooseEffect:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (double)containerHeight;

@end
