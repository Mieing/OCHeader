@class BDMannorStyleTemplateComponentModel, NSDictionary, BDMannorComponentManagerContext;

@interface BDMannorAdKVAbstractView : UIView

@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (copy, nonatomic) NSDictionary *layoutContext;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)kvAbstractViewTapped:(id)a0;
- (id)createLabelWith:(id)a0;
- (void)setupComponentViewUIWithModel;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
