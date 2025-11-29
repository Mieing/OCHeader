@class UIImageView, UILabel, UIView, BDUGLuckyDogToastModel;

@interface BDUGLuckyDogImageToast : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLab;
@property (retain, nonatomic) UILabel *subTitleLab;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) BDUGLuckyDogToastModel *model;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
