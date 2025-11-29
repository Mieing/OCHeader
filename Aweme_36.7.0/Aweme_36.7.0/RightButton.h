@class NSString;

@interface RightButton : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schemeURL;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
