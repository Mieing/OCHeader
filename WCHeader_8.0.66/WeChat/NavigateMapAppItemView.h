@class NSString, UIImage;

@interface NavigateMapAppItemView : UIView

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) BOOL isDevice;

- (id)initWithTitle:(id)a0 icon:(id)a1 maskedCorners:(unsigned long long)a2;
- (void)initView;
- (void).cxx_destruct;

@end
