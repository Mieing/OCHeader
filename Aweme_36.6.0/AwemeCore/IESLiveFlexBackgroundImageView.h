@class NSArray, UIView;
@protocol IESLiveFlexImage;

@interface IESLiveFlexBackgroundImageView : IESLiveImageView

@property (retain, nonatomic) id<IESLiveFlexImage> bgFlexImage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSArray *flexSetting;
@property (retain, nonatomic) NSArray *textSetting;

- (void)setUI;
- (void)setImage:(id)a0 flexSetting:(id)a1 textSetting:(id)a2;
- (id)p_imageWithFlexSetting:(id)a0 image:(id)a1;
- (void)p_updateLayoutWithTextFlexSetting:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
