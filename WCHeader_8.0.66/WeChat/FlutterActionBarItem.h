@class UIImageView, UIImage, UIView, UIBarButtonItem;

@interface FlutterActionBarItem : NSObject

@property (retain, nonatomic) UIBarButtonItem *barBtnItem;
@property (nonatomic) BOOL isRightItem;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;

- (id)init;
- (void).cxx_destruct;

@end
