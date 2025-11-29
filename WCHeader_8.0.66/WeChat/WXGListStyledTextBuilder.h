@class NSString, UIFont, UIColor;

@interface WXGListStyledTextBuilder : NSObject

@property (retain, nonatomic) NSString *prefixText;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) float offsetX;
@property (nonatomic) float offsetY;
@property (nonatomic) float maxWidth;
@property (nonatomic) float sepX;
@property (nonatomic) int maxLine;

- (id)init;
- (id)build;
- (void).cxx_destruct;

@end
