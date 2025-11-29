@class NSString, AWEMusicDetailInspirationItemView, UIView;

@interface AWEMusicDetailInspirationCollectionViewCell : UICollectionViewCell <AWEMusicDetailInspirationItemViewDelegate, AWEMusicDetailInspirationCollectionViewCellProtocol>

@property (retain, nonatomic) AWEMusicDetailInspirationItemView *inspirationView;
@property (retain, nonatomic) UIView *titlePlaceHolderView;
@property (copy, nonatomic) id /* block */ rightButtonClickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0 coverLoadCompletion:(id /* block */)a1;
- (void)setupPlaceHolderView;
- (void)setupInspirationInfoView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)didTapRightButton;

@end
