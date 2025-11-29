@class UILabel, UIButton, IESECWinEnterStoreObject;

@interface IESECWinEnterStoreCell : UICollectionViewCell {
    IESECWinEnterStoreObject *_object;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *goStoreBtn;
@property (copy, nonatomic) id /* block */ gotoStore;

- (void)updateWithObject:(id)a0;
- (void)goStoreAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
