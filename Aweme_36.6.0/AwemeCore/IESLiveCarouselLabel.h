@class UILabel;

@interface IESLiveCarouselLabel : UIView

@property (retain, nonatomic) UILabel *currentLabel;
@property (retain, nonatomic) UILabel *toDisplayLabel;

- (void)transitionFromLabel:(id)a0 toLabel:(id)a1 completion:(id /* block */)a2;
- (void)changeToDisplayLabel:(id)a0 withDirection:(long long)a1 completion:(id /* block */)a2;
- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
