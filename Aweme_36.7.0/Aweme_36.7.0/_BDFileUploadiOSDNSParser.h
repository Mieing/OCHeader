@class NSMutableDictionary, BDFileUploadiOSDNSCache;

@interface _BDFileUploadiOSDNSParser : NSObject

@property (retain, nonatomic) NSMutableDictionary *parsers;
@property (retain, nonatomic) NSMutableDictionary *sameParsers;
@property (retain, nonatomic) BDFileUploadiOSDNSCache *cache;
@property (nonatomic) unsigned long long networkState;

+ (id)shareInstance;

- (void)_networkDidChangeEvent:(id)a0;
- (id)getIpWithHost:(id)a0 parserType:(long long)a1 backupParseType:(long long)a2 result:(id /* block */)a3;
- (id)getItemInfoWithHost:(id)a0 parserType:(long long)a1 backupParseType:(long long)a2 result:(id /* block */)a3;
- (void)_startParese:(id)a0 result:(id /* block */)a1;
- (void)_saveSameParser:(id)a0;
- (id)_clearSameParsers:(id)a0;
- (id)_sameHostParsering:(id)a0;
- (void)_addParser:(id)a0;
- (void)_removeParser:(id)a0;
- (long long)_backupParserType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
