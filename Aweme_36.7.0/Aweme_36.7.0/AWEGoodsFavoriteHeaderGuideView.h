@class UILabel, UIImageView;

@interface AWEGoodsFavoriteHeaderGuideView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *jumpLabel;
@property (retain, nonatomic) UIImageView *closeIcon;

- (id)initWithModel:(id)a0 tapAction:(id /* block */)a1 closeAction:(id /* block */)a2;
- (void).cxx_destruct;

@end
