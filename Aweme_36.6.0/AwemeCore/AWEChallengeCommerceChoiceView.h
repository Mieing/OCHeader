@class UILabel, UIView, DUXCheckBox;

@interface AWEChallengeCommerceChoiceView : UIView

@property (retain, nonatomic) DUXCheckBox *box;
@property (retain, nonatomic) UILabel *boxLabel;
@property (retain, nonatomic) UILabel *videoTabLabel;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ fetchVideoBlock;

- (void)tapChoiceView:(id)a0;
- (void)tapTaskChoiceView;
- (BOOL)isBoxSelected;
- (id)initWithIsLightColor:(BOOL)a0 fetchVideoBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setup;

@end
