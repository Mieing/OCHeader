@class AWEWelfareActivityModel;

@interface AWEDetailWelfareModel : AWEDetailCommonDiffableModel

@property (retain, nonatomic) AWEWelfareActivityModel *concreteModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;

- (id)initWithConcreteModel:(id)a0;
- (void).cxx_destruct;

@end
