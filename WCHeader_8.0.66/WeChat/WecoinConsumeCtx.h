@class NSString;

@interface WecoinConsumeCtx : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *urlParams;

+ (void)initialize;

@end
