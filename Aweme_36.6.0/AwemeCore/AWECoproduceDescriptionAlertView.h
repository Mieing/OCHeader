@class AWEPublishCoproduceViewModel, NSArray, TTTAttributedLabel, AWEUIButton, UILabel, UIView, NSString;

@interface AWECoproduceDescriptionAlertView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TTTAttributedLabel *descriptionLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) AWEUIButton *agreeButton;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ detailBlock;
@property (copy, nonatomic) NSArray *accessElements;
@property (copy, nonatomic) NSString *protocolString;
@property (nonatomic) long long coCreatorAwemeType;
@property (copy, nonatomic) AWEPublishCoproduceViewModel *coProduceViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINAdaperClass;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)setUI;
- (id)aAWEFeedModuleServiceDOUYINAdaper;
- (void)initDescriptionLabelContext;
- (void)agreeButtonDidTap;
- (id)initWithTapBlock:(id /* block */)a0 detailBlock:(id /* block */)a1 coCreatorType:(long long)a2 coProduceViewModel:(id)a3;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)dismiss:(BOOL)a0;

@end
