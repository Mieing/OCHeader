@class NSMutableDictionary;

@interface AWEPOIBizEnterIdManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *pageEnterIdCacheDict;

+ (id)sharedInstance;

- (id)createBcmChainEnterIdWithIsPrefix:(BOOL)a0 preEnterId:(id)a1;
- (id)getTargetParamKeyWithPageBtm:(id)a0;
- (void)setBcmChainEnterIdWithHost:(id)a0 preEnterId:(id)a1;
- (void)setBcmChainExitIdWithHost:(id)a0;
- (void)frozenEnterIdCacheWithBtm:(id)a0;
- (void)resetFrozenEnterIdCacheWithBtm:(id)a0;
- (id)getValidBTMResponder:(id)a0;
- (id)getEnterIdWithBcmItem:(id)a0;
- (id)getBcmChainWithMaxChainLength:(unsigned long long)a0;
- (id)getbtmsWithBcmChain:(id)a0;
- (id)getEnterIdsWithBcmChain:(id)a0;
- (id)getAllEnterId;
- (void)setEnterIdCacheWithBtm:(id)a0 targetParamKey:(id)a1;
- (void)markEnterIdCacheWithBtm:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
