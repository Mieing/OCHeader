@class UIControl, NSMutableArray, UILabel, UIView, UIButton;
@protocol BDUGSecurePasteDialogViewDelegate;

@interface BDUGSecurePasteDialogView : UIView

@property (nonatomic) long long type;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIControl *allowButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<BDUGSecurePasteDialogViewDelegate> uiDelegate;
@property (retain, nonatomic) NSMutableArray *compltionHandles;

+ (id)getCurrentShowingDialog;
+ (id)findSuperViewInVisibleWindow;
+ (BOOL)isDialogShowingNow;

- (void)addCompletionHandle:(id /* block */)a0;
- (void)showView;
- (void)orientationChange:(id)a0;
- (double)allowButtonWidth;
- (double)allowButtonLeft;
- (double)cancelButtonTop;
- (double)cancelButtonWidth;
- (double)cancelButtonLeft;
- (double)cancelButtonHeight;
- (double)containerViewHeight;
- (double)containerViewCornerRadius;
- (id)allowButtonTitleColor;
- (id)allowButtonBackgroundColor;
- (double)allowButtonCornerRadius;
- (id)cancelButtonTitleColor;
- (id)cancelButtonTitleFont;
- (void)cancelButtonClick;
- (void).cxx_destruct;
- (id)titleFont;
- (id)titleColor;
- (void)hide;
- (id)subTitle;
- (id)title;
- (void)layoutSubviews;
- (void)pasteItemProviders:(id)a0;
- (BOOL)canPasteItemProviders:(id)a0;
- (id)initWithType:(long long)a0 delegate:(id)a1;

@end
