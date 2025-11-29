@class NSString;

@interface IESECElementImageBubble : GPBMessage

@property (nonatomic) long long height;
@property (nonatomic) long long borderRadius;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long horizontalPadding;

+ (id)descriptor;

@end
