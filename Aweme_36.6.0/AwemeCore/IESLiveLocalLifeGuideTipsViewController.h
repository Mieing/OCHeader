@class IESLiveAnchorLocalLifeSchemaInfoModel, IESLiveLocalLifeIdentitySelectView, UIView;

@interface IESLiveLocalLifeGuideTipsViewController : UIViewController

@property (retain, nonatomic) IESLiveLocalLifeIdentitySelectView *contentView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) IESLiveAnchorLocalLifeSchemaInfoModel *infoModel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)tapDismiss;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
