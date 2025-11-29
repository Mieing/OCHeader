@class NSNumber, UILabel, AWETeenAccessibilityElement, UIButton;

@interface AWETeenProfileSocialStatisticView : UIView

@property (retain, nonatomic) UILabel *subscribingLabel;
@property (retain, nonatomic) UIButton *subscribingPrefixBtn;
@property (retain, nonatomic) AWETeenAccessibilityElement *subscribingElement;
@property (retain, nonatomic) NSNumber *subscribingCount;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) long long labelFont;
@property (copy, nonatomic) id /* block */ subscribingClickedBlock;

- (void)p_setUpUI;
- (void)updateSubscribingCount:(id)a0 isPlaceholder:(BOOL)a1 isCurrentUser:(BOOL)a2;
- (double)labelsGap;
- (void)p_updateSocialStatisticContent:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)handleTapGestureRecognizer:(id)a0;

@end
