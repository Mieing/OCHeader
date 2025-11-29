@class UIImageView, IESECWinLivingHotLatestInfoObject, UILabel, UIView;

@interface IESECWinLivingHotLatestInfoCell : UICollectionViewCell <IGListBindable> {
    IESECWinLivingHotLatestInfoObject *_object;
}

@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *webcastInfoLabel;
@property (retain, nonatomic) UIView *splitLineView;
@property (retain, nonatomic) UILabel *audienceInfoLabel;

- (void)bindObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateUI;

@end
