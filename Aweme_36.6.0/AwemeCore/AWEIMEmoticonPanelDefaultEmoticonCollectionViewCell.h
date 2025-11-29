@class UIStackView, NSString, UIView, UIButton;
@protocol AWEIMEmoticonActionComponent;

@interface AWEIMEmoticonPanelDefaultEmoticonCollectionViewCell : AWEIMEmoticonPanelPageCollectionViewCell <AWEIMEmoticonPanelDefaultEmoticonCollectionViewCellProtocol, AWEIMEmoticonFullImageAlphaCollectionViewCellDelegate>

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIView *buttonsBgView;
@property (retain, nonatomic) UIStackView *buttonContainer;
@property (nonatomic) BOOL hasUpdatedButtonLayout;
@property (copy, nonatomic) id /* block */ layoutBlock;
@property (weak, nonatomic) id<AWEIMEmoticonActionComponent> actionComponent;
@property (nonatomic) BOOL sendButtonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendBtnClicked:(id)a0;
- (void)didEndDisplayingCell;
- (void)updateButtonLayoutWithLayoutCache:(id)a0;
- (void)accessibilityDidBecomeFocusedWithIndexPath:(id)a0;
- (void)p_addFunctionView;
- (void)p_reloadSendButtonWithIsEnable:(BOOL)a0;
- (void)p_updateSendButtonTitleWithTitle:(id)a0;
- (BOOL)shouldShowPreviewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)minHorizontalMargin;
- (double)verticalMarginToCell;
- (void)previewHelper:(id)a0 beginPreviewEmotionModel:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willDisplayCell;

@end
