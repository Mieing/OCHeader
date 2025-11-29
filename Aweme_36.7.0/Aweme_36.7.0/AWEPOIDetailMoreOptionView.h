@class UIImageView, NSArray, UIView;
@protocol AWEPOIDetailMoreOptionViewDelegate;

@interface AWEPOIDetailMoreOptionView : UIView

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id<AWEPOIDetailMoreOptionViewDelegate> delegate;

- (void)handleTapItemView:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)setupViews;
- (double)viewHeight;

@end
