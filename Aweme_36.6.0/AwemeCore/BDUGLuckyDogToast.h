@class UIImageView, UILabel, UIView, BDUGLuckyDogToastModel;

@interface BDUGLuckyDogToast : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLab;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) BDUGLuckyDogToastModel *model;
@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (nonatomic) double contentHeight;

- (id)imageWithImageName:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
