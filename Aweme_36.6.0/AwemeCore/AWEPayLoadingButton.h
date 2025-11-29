@class UIImage, UIColor;

@interface AWEPayLoadingButton : DUXBaseButton

@property (retain, nonatomic) UIImage *loadingIcon;
@property (retain, nonatomic) UIColor *loadingTitleColor;
@property (retain, nonatomic) UIColor *normalTitleColor;

- (void)startLoadingWithTitle:(id)a0;
- (void)endLoadingWithTitle:(id)a0;
- (void).cxx_destruct;

@end
