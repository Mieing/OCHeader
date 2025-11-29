@interface BDFileUploadiOSDNSParser : NSObject

+ (void)setUpDNSTTL:(long long)a0;
+ (void)setUpBackupDNSParserWaitTime:(double)a0;
+ (void)setUpFirstDNSParseType:(long long)a0;
+ (void)setUpMainDNSParseType:(long long)a0 backupParseType:(long long)a1;
+ (void)setDnsHostString:(id)a0 dnsGoogleHost:(id)a1;
+ (id)dnsTTHostString;
+ (id)dnsGoogleHostString;
+ (id)getIpWithHost:(id)a0 parserType:(long long)a1 backUpType:(long long)a2 result:(id /* block */)a3;
+ (id)getItemInfoWithHost:(id)a0 parserType:(long long)a1 backUpType:(long long)a2 result:(id /* block */)a3;
+ (id)getIpWithHost:(id)a0 result:(id /* block */)a1;
+ (id)getItemInfoWithHost:(id)a0 result:(id /* block */)a1;

@end
