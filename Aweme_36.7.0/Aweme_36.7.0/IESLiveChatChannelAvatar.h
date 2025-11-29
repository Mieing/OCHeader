@class UIImageView, UIImage, CAShapeLayer, UIView;

@interface IESLiveChatChannelAvatar : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) CAShapeLayer *avatarShapeLayer;
@property (retain, nonatomic) CAShapeLayer *avatarBorderLayer;
@property (nonatomic) double radius;
@property (nonatomic) struct CGPoint { double x; double y; } arcCenter;
@property (nonatomic) double arcRaduis;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (retain, nonatomic) UIImage *placeholdImage;
@property (nonatomic) struct CGSize { double width; double height; } customSize;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) CAShapeLayer *customViewShapeLayer;

+ (void)clipViewWithSize:(struct CGSize { double x0; double x1; })a0 customView:(id)a1 arcCenter:(struct CGPoint { double x0; double x1; })a2 arcRadius:(double)a3;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 radius:(double)a1 URLs:(id)a2 placeholderImage:(id)a3 arcCenter:(struct CGPoint { double x0; double x1; })a4 arcRadius:(double)a5;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 radius:(double)a1 liveImage:(id)a2 placeholderImage:(id)a3 arcCenter:(struct CGPoint { double x0; double x1; })a4 arcRadius:(double)a5;
- (void)setImageWithURLs:(id)a0 placeholderImage:(id)a1;
- (void)updateImageClipStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setupUI;

@end
