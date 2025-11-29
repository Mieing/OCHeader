@class UIImageView, UILabel, IESECFeedResourceCardSearchItemModel;
@protocol IESECGoodsFeedSearchCardDelegate;

@interface IESECGoodsFeedSearchImageCard : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESECFeedResourceCardSearchItemModel *model;
@property (weak, nonatomic) id<IESECGoodsFeedSearchCardDelegate> delegate;

- (void)clickSearchImageCard:(id)a0;
- (void)updateSearchCardWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
