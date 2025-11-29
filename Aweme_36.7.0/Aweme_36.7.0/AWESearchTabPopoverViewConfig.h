@class NSString, UIColor, UIFont;

@interface AWESearchTabPopoverViewConfig : NSObject

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL showArrow;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;

- (void).cxx_destruct;

@end
