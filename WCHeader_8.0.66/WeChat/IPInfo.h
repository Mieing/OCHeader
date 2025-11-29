@class NSString, NSMutableArray;

@interface IPInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSMutableArray *ipStrings;
@property (nonatomic) int retcode;
@property (nonatomic) unsigned int ttl;

+ (void)initialize;

@end
