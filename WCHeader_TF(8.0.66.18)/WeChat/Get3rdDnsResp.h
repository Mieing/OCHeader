@class NSMutableArray;

@interface Get3rdDnsResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *ipInfos;
@property (nonatomic) int retcode;

+ (void)initialize;

@end
