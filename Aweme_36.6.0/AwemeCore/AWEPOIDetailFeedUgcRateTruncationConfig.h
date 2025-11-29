@class NSString, UIFont, UIColor;

@interface AWEPOIDetailFeedUgcRateTruncationConfig : NSObject

@property (copy, nonatomic) NSString *truncationText;
@property (retain, nonatomic) UIFont *truncationFont;
@property (retain, nonatomic) UIColor *truncationTextColor;
@property (retain, nonatomic) UIFont *alignToFont;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL hotAreaOptEnabled;

- (id)truncationTokenWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;

@end
