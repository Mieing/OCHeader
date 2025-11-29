@class NSString, NSMutableArray, NSLock;

@interface AVMDLiOSDNSParserBridgeV2 : NSObject

@property (retain, nonatomic) NSMutableArray *parserActions;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) struct VCNDNSParserInterface { void /* function */ **x0; int x1; } *implement;
@property (nonatomic) long long startT;
@property (retain, nonatomic) NSLock *lock;

- (int)switchTypeToInternal:(long long)a0;
- (int)startParse:(const char *)a0 implement:(struct VCNDNSParserInterface { void /* function */ **x0; int x1; } *)a1 dnsType:(int)a2;
- (void)triggerRefreshDNSInfo:(const char *)a0 implement:(struct VCNDNSParserInterface { void /* function */ **x0; int x1; } *)a1 dnsType:(int)a2;
- (id)getIpList:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
