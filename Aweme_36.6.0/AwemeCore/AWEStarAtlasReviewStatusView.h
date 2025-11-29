@class UIImageView, UILabel, NSString;

@interface AWEStarAtlasReviewStatusView : UIView <AWEStarAtlasReviewStatusView>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;
- (void)tapped:(id)a0;

@end
