@class AWEVideoCoverRecommendTextViewController, UIView, AWEVideoCoverTextTemplateController, DUXTabBarContainerController, AWEVideoPublishViewModel, NSString, UIButton, AWEVideoCoverTextTabContext, AWEVideoCoverTextStyleViewController, UILabel;
@protocol AWENewVideoCoverEditTemplateTextDelegate;

@interface AWEVideoCoverTextTabContainerView : UIView <DUXTabBarContainerDelegate, AWETextTemplateControllerDelegate, AWEVideoCoverTextStyleDelegate, AWEVideoCoverRecommendTextViewDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UILabel *inputTextLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIButton *historyButton;
@property (retain, nonatomic) UIButton *hotButton;
@property (retain, nonatomic) AWEVideoCoverTextTemplateController *textTemplateController;
@property (retain, nonatomic) AWEVideoCoverTextTemplateController *historyTextTemplateController;
@property (retain, nonatomic) AWEVideoCoverTextTemplateController *currentTextTemplateController;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarController;
@property (retain, nonatomic) AWEVideoCoverRecommendTextViewController *recommendTextController;
@property (retain, nonatomic) AWEVideoCoverTextStyleViewController *textStyleController;
@property (nonatomic) BOOL isFirstShow;
@property (retain, nonatomic) AWEVideoCoverTextTabContext *context;
@property (weak, nonatomic) id<AWENewVideoCoverEditTemplateTextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)tabBarWidthWithTabs:(id)a0;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)setupInputView;
- (void)setupTabBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1;
- (void)stickerPickerControllerDidTapClearStickerButton:(id)a0;
- (void)stickerPickerController:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerPickerController:(id)a0 didSelectSticker:(id)a1 extraParams:(id)a2 indexPath:(id)a3 categoryIdentifier:(id)a4;
- (void)stickerPickerController:(id)a0 didDeselectSticker:(id)a1;
- (id)currentTextModel;
- (void)updateInputViewContent:(id)a0;
- (void)didSelectColor:(id)a0;
- (void)recommendTextView:(id)a0 didSelectItem:(id)a1;
- (void)updateCurrentNLELayerView:(id)a0;
- (void)didClickTextStyle:(unsigned long long)a0;
- (void)didClickAlignmentStyle:(long long)a0;
- (void)updateTextTemplatePanel:(id)a0;
- (void)textTabContainerViewShow;
- (id)currentRecommendText;
- (BOOL)isShowHistory;
- (void)setupSubControllers;
- (id)createTemplateConfig;
- (void)didTapInputView;
- (void)historyButtonAction:(id)a0;
- (void)hotButtonAction:(id)a0;
- (id)currentInputViewContent;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)didSelectFont:(id)a0;

@end
