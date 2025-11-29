@class NSMutableArray, UIStackView;

@interface IESECGoodsFeedImmersiveBottomOperationView : IESECGoodsFeedImmersiveBaseView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (retain, nonatomic) NSMutableArray *entryButtons;
@property (retain, nonatomic) NSMutableArray *buyButtons;

- (void)configUI;
- (void)updateBuyView:(id)a0;
- (void)clearSubviewsInStackView:(id)a0;
- (id)entryButtonAtIndex:(long long)a0;
- (id)buyButtonAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)updateEntry:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
