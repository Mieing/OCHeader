@class PaddingStyle, MarginStyle;

@interface ViewStyle : WXPBGeneratedMessage

@property (retain, nonatomic) PaddingStyle *padding;
@property (retain, nonatomic) MarginStyle *margin;
@property (nonatomic) int alignSelf;
@property (nonatomic) float width;
@property (nonatomic) float height;

+ (void)initialize;

@end
