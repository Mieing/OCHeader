@class NSString, ResultCommContent;

@interface WeappResult : WXPBGeneratedMessage

@property (retain, nonatomic) ResultCommContent *commContent;
@property (retain, nonatomic) NSString *userName;

+ (void)initialize;

@end
