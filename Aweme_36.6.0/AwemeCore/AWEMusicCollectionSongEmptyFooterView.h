@class UIImageView, UILabel, UIButton;

@interface AWEMusicCollectionSongEmptyFooterView : UIView

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *toFindMusicButton;
@property (copy, nonatomic) id /* block */ toFindMusicClickBlock;

- (void)configSubviews;
- (void)buttonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
