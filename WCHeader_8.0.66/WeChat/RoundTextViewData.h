@class NSString, TextViewData, PaddingStyle, DynamicColor;

@interface RoundTextViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) TextViewData *text;
@property (retain, nonatomic) PaddingStyle *padding;
@property (nonatomic) float cornerRadius;
@property (nonatomic) long long bgColor;
@property (retain, nonatomic) DynamicColor *dynamicBgColor;

+ (void)initialize;

@end
