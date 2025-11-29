@class UIView, AFDLongPressIMSendButton, AFDLongPressContext, AWEButton, NSString, UIImageView, CAShapeLayer, AWEAwemeLongPressFunctionModel, UILabel;
@protocol AWEIMStreakDisplayManagerProtocol;

@interface AWEAwemeLongPressIMCell : UICollectionViewCell <UIGestureRecognizerDelegate, AWEIMStreakDisplayManagerDelegate>

@property (retain, nonatomic) UIImageView *iconView1;
@property (retain, nonatomic) UIImageView *iconView2;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AFDLongPressIMSendButton *imSendButton;
@property (retain, nonatomic) UIImageView *sendView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *checkboxView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (nonatomic) BOOL enableDynamicTheme;
@property (retain, nonatomic) UIView *textView;
@property (retain, nonatomic) AWEButton *recommendButton;
@property (retain, nonatomic) AWEAwemeLongPressFunctionModel *model;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (copy, nonatomic) id /* block */ dismissLongPressMenuBlock;
@property (copy, nonatomic) id /* block */ imSendButtonClickBlock;
@property (copy, nonatomic) id /* block */ recommendButtonClickBlock;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (nonatomic) unsigned long long hashFlag;
@property (retain, nonatomic) UIImageView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)customIMStreakTextFont;
- (void)updateTip:(id)a0 textHeight:(double)a1 textColor:(id)a2 textFont:(id)a3 textInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (double)__nameLabelDuxFontSizeIfNecessary;
- (void)updateIconViewNeedClipToBounds:(BOOL)a0;
- (void)setupUIWithContext:(id)a0;
- (void)updateIconWithImage:(id)a0 needClipToBounds:(BOOL)a1;
- (void)updateSeparateLineVisibility:(BOOL)a0;
- (void)updateCellCorner:(BOOL)a0 cornerPosition:(unsigned long long)a1 topPadding:(double)a2 bottomPadding:(double)a3;
- (void)updateDynamicTheme:(BOOL)a0;
- (void)updateDoubleIconsViewNeedClipToBounds:(BOOL)a0;
- (void)updateIconWithURL:(id)a0 needClipToBounds:(BOOL)a1;
- (void)updateIconsWithURL1:(id)a0 URL2:(id)a1 needClipToBounds:(BOOL)a2;
- (void)updateOnlineStatus:(BOOL)a0;
- (BOOL)p_useDoubleAvatarStyle;
- (void)recommendButtonClicked;
- (void)handleLongPresse:(id)a0;
- (void)updateSendViewWithModel:(id)a0 animated:(BOOL)a1;
- (void)updateConsecutiveChatStatusWithModel:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateTitle:(id)a0;

@end
