@class UIButton, AWESearchAIGCInputAgentActionCreateRequirementOpt, UIView;

@interface AWESearchAIGCInputCreatePanelRequireOptionCell : UITableViewCell

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *sepView;
@property (copy, nonatomic) id /* block */ selectCallback;
@property (retain, nonatomic) AWESearchAIGCInputAgentActionCreateRequirementOpt *optModel;

+ (id)nameLabelFont;
+ (double)viewHeightWithModel:(id)a0;
+ (double)viewMinWidthWithModel:(id)a0;
+ (id)identifier;

- (void)selectOptionAction:(id)a0;
- (void)updateWithModel:(id)a0 selectCallback:(id /* block */)a1 isLast:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
