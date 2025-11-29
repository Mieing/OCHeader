@class AWESearchMerchandisSearchWordRegion, NSMutableArray, NSDictionary;
@protocol AWESearchWordProtocol;

@interface AWESearchGoodsSearchWordView : UIView

@property (weak, nonatomic) id<AWESearchWordProtocol> delegate;
@property (retain, nonatomic) NSMutableArray *wordViewArray;
@property (retain, nonatomic) AWESearchMerchandisSearchWordRegion *searchWordInfo;
@property (copy, nonatomic) NSDictionary *searchInfoDict;

+ (double)searchWordHeight;

- (void)setupWordView;
- (void)setupBgView:(id)a0 :(id)a1 :(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
