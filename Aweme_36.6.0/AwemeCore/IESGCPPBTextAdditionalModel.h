@class NSString;

@interface IESGCPPBTextAdditionalModel : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *textColor;

+ (id)descriptor;

@end
