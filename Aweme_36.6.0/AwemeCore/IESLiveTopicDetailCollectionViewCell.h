@class UIImageView, LOTAnimationView, NSString;

@interface IESLiveTopicDetailCollectionViewCell : UICollectionViewCell <AWELiveTopicDetailCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) LOTAnimationView *liveLottie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAweme:(id)a0;
- (id)colorLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)livingLabelWrapper;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
