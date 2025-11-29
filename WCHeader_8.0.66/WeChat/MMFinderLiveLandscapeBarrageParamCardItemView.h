@class MMUILabel, NSMutableArray;

@interface MMFinderLiveLandscapeBarrageParamCardItemView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *paramCardBtnList;
@property (copy, nonatomic) id /* block */ onBarrageParamCardSelect;

+ (double)staticWidth;
+ (double)staticHeight;

- (id)initWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)createTitleLabel:(id)a0;
- (void)layoutUI;
- (void)addParamCard:(id)a0;
- (void)onParamCardBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
