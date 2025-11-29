@class IESLivePKRecommendFilterItem;

@interface IESLivePKRecommendFilterCell : UIView

@property (retain, nonatomic) IESLivePKRecommendFilterItem *itemModel;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupView;
- (void)tapAction;

@end
