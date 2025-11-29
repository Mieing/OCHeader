@class NSObject, NSMutableDictionary, AVMDLiOSDNSCache;
@protocol OS_dispatch_queue, AVMDLCustomHttpDNSParser;

@interface _AVMDLiOSDNSParser : NSObject

@property (retain, nonatomic) NSMutableDictionary *parsers;
@property (retain, nonatomic) NSMutableDictionary *sameParsers;
@property (retain, nonatomic) AVMDLiOSDNSCache *cache;
@property (nonatomic) unsigned long long networkState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dnsQueue;
@property (weak, nonatomic) id<AVMDLCustomHttpDNSParser> customHttpDNS;

+ (id)shareInstance;

- (void)_networkDidChangeEvent:(id)a0;
- (void)_startParese:(id)a0 result:(id /* block */)a1;
- (void)_saveSameParser:(id)a0;
- (id)_clearSameParsers:(id)a0;
- (id)_sameHostParsering:(id)a0;
- (void)_addParser:(id)a0;
- (void)_removeParser:(id)a0;
- (void)cancelParser:(id)a0;
- (id)getIpWithHost:(id)a0 parserType:(long long)a1 result:(id /* block */)a2;
- (id)getItemInfoWithHost:(id)a0 parserType:(long long)a1 result:(id /* block */)a2;
- (id)_startPareserAction:(id)a0 parserType:(long long)a1 result:(id /* block */)a2;
- (void)invokeOutResultBlock:(id)a0 info:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
