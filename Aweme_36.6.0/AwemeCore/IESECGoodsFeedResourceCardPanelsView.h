@class UIStackView, UIImageView, UILabel, NSMutableArray, UIView;

@interface IESECGoodsFeedResourceCardPanelsView : UIView {
    UIView *_rightDecorateContainerView;
}

@property (retain, nonatomic) NSMutableArray *cardList;
@property (retain, nonatomic) NSMutableArray *cellList;
@property (nonatomic) BOOL showCrossedMarketPrice;
@property (retain, nonatomic) UILabel *leftDecorateLabel;
@property (retain, nonatomic) UIView *leftDecorateView;
@property (retain, nonatomic) UIStackView *productCellStack;
@property (retain, nonatomic) UIStackView *rightDecorateStack;
@property (retain, nonatomic) UIImageView *changeProdcutsIcon;
@property (copy, nonatomic) id /* block */ changeProductBlock;

- (void)setupUIWithModel:(id)a0;
- (void)changeProductDidClick:(id)a0;
- (void)startChangeProductRotation;
- (void)stopChangeProductRotation;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
