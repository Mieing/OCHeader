@class NSString, UIImageView, UILabel, UIView;

@interface AWEStudioEcommerceUsefulGuideView : UIView

@property (retain, nonatomic) UIImageView *image;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *arrowUrl;

- (void)makeConstraint;
- (void).cxx_destruct;
- (id)init;
- (void)updateUI;

@end
