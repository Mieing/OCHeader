@class NSString;

@interface IESGCPPBHighlight : GPBMessage

@property (copy, nonatomic) NSString *highlightText;
@property (copy, nonatomic) NSString *highlightURL;

+ (id)descriptor;

@end
