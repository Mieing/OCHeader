@class NSString, UIImageView, BDMannorComponentManagerContext, UILabel, YYLabel;

@interface BDMannorAdOperationComponentView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) YYLabel *descLabel;
@property (copy, nonatomic) NSString *eventName;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ onSubViewClick;

- (id)createContentDescriptionStringFrom:(id)a0;
- (void)componentTapped:(id)a0;
- (double)descriptionWidth;
- (void)configWithContext:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
