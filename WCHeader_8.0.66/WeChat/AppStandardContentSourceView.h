@class NSString, UIImageView, UIImage, MMUILabel;

@interface AppStandardContentSourceView : UIView

@property (retain, nonatomic) MMUILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *sourceImageView;
@property (retain, nonatomic) NSString *sourceText;
@property (retain, nonatomic) UIImage *sourceIcon;

+ (double)expectingLayoutHeight;

- (id)init;
- (void)initSubviews;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
