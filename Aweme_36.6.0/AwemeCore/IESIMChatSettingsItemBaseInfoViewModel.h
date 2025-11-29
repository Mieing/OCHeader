@class NSString, NSAttributedString, UIView;

@interface IESIMChatSettingsItemBaseInfoViewModel : IESIMChatSettingsItemBaseViewModel

@property (nonatomic) BOOL hasSubTag;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIView *titlePreView;
@property (nonatomic) double customSpacingAfterTitlePreView;
@property (retain, nonatomic) UIView *titleNextView;
@property (nonatomic) double customSpacingBeforeTitleNextView;
@property (copy, nonatomic) NSString *describe;
@property (copy, nonatomic) NSAttributedString *attributedDescribe;
@property (nonatomic) double customSpaceBetweenTitleAndDescribe;
@property (nonatomic) long long describeNumberOfLines;
@property (retain, nonatomic) UIView *leadingView;
@property (retain, nonatomic) UIView *trailingView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) long long lineStyle;
@property (nonatomic) double describeBottomSpace;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithType:(long long)a0;

@end
