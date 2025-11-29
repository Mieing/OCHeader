@class UIColor;

@interface QTextStyle : NSObject

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double fontSize;
@property (nonatomic) int priority;

- (id)init;
- (void).cxx_destruct;

@end
