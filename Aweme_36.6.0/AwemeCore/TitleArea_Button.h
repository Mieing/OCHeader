@class NSString;

@interface TitleArea_Button : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long actionType;

+ (id)descriptor;

@end
