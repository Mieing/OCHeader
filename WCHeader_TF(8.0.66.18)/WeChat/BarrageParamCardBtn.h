@class BarrageParamCard;

@interface BarrageParamCardBtn : MMUIButton

@property (retain, nonatomic) BarrageParamCard *paramCard;

- (id)initWithParamCard:(id)a0;
- (void)refreshUI;
- (id)getTitleColor;
- (void)updateBackgroundColor;
- (void).cxx_destruct;

@end
