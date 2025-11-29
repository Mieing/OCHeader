@class UITapGestureRecognizer, AWESearchAnchorModel;
@protocol AWESearchAnchorViewMultiCellBarItemViewProtocol;

@interface AWEPlayInteractionSearchAnchorViewMultiCellBarItemView : UIView

@property (weak, nonatomic) id<AWESearchAnchorViewMultiCellBarItemViewProtocol> delegate;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) AWESearchAnchorModel *anchorModel;
@property (nonatomic) long long index;
@property (nonatomic) double totalWidth;

- (void)configWithModel:(id)a0;
- (void)itemViewJumpAction;
- (id)initWithModel:(id)a0 totalWidth:(double)a1 index:(long long)a2;
- (void).cxx_destruct;

@end
