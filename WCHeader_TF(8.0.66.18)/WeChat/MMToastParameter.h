@class NSString, UIImage, UIView, NSMutableAttributedString;
@protocol MultiLineTextView;

@interface MMToastParameter : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableAttributedString *attributedString;
@property (retain, nonatomic) NSString *svgIconName;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIView<MultiLineTextView> *customView;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
