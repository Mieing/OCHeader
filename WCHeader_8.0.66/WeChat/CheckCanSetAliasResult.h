@class NSString;

@interface CheckCanSetAliasResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *result;
@property (nonatomic) BOOL isPass;

+ (void)initialize;

@end
