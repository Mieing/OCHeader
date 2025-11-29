@class UIColor, NSString, UIFont, NSURL;

@interface AWEModernFeedVideoDeepQATitleFrame : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contanierFrame;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) NSURL *iconImageURL;
@property (nonatomic) long long type;

- (void)configFrameWithModel:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3;
- (void).cxx_destruct;
- (id)init;

@end
