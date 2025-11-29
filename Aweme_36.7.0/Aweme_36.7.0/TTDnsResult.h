@class NSArray, NSString;

@interface TTDnsResult : NSObject

@property (nonatomic) int ret;
@property (nonatomic) int source;
@property (nonatomic) int cacheSource;
@property (retain, nonatomic) NSArray *iplist;
@property (retain, nonatomic) NSString *detailedInfo;

- (id)initWithRet:(int)a0 source:(int)a1 cacheSource:(int)a2 ipList:(id)a3 detailedInfo:(id)a4;
- (void).cxx_destruct;

@end
