@interface AVMDLiOSDNSParser : NSObject

+ (void)setUpFirstDNSParseType:(long long)a0 backup:(long long)a1;
+ (void)setUpDNSTTL:(long long)a0;
+ (void)setUpBackupDNSParserWaitTime:(double)a0;
+ (void)setNetClient:(id)a0;
+ (void)setUpFirstDNSParseType:(long long)a0;
+ (id)getIpWithHost:(id)a0 result:(id /* block */)a1;
+ (id)getItemInfoWithHost:(id)a0 result:(id /* block */)a1;
+ (void)cancelParser:(id)a0;
+ (void)setUpDNSEnableParallel:(long long)a0;
+ (void)setUpDNSEnableRefresh:(long long)a0;
+ (void)setCustomHttpDNS:(id)a0;
+ (void)setNetClientV1:(id /* block */)a0;
+ (void)clearAllDNSCache;
+ (id)getIpWithHost:(id)a0 parserType:(long long)a1 result:(id /* block */)a2;
+ (id)getItemInfoWithHost:(id)a0 parserType:(long long)a1 result:(id /* block */)a2;
+ (void)setUpEnableLocalDNSThreadOptimize:(BOOL)a0;
+ (void)setUpEnableNoLockNotify:(BOOL)a0;
+ (void)removeDNSCache:(id)a0;
+ (void)processHiJack;
+ (id)refreshItemInfoWithHost:(id)a0 parserType:(long long)a1 result:(id /* block */)a2;
+ (id)getNetClient;
+ (id)getNetClientV1;

@end
