@class UIColor, NSString;

@interface CMCodeViewAttributes : NSObject

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *highlightTheme;

- (void).cxx_destruct;
- (id)init;

@end
