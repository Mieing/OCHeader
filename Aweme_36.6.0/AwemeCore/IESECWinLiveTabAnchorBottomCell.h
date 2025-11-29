@class UILabel, UIImageView, IESECWinLiveTabAnchorBottomObject;

@interface IESECWinLiveTabAnchorBottomCell : UICollectionViewCell {
    IESECWinLiveTabAnchorBottomObject *_object;
}

@property (retain, nonatomic) UILabel *bottomText;
@property (retain, nonatomic) UIImageView *arrowView;

- (void)bindObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
