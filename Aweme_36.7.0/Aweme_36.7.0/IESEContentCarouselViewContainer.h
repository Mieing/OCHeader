@class NSString, UIImageView, IESECURLModel;

@interface IESEContentCarouselViewContainer : UICollectionViewCell

@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (retain, nonatomic) UIImageView *promotionImageView;
@property (retain, nonatomic) IESECURLModel *promotionImageModel;
@property (retain, nonatomic) UIImageView *imageView;

- (void)bindURLModel:(id)a0;
- (void)bindActivityURLModel:(id)a0;
- (void)unbindActivityURLModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
