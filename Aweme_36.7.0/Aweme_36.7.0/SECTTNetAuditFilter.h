@class NSDictionary, NSArray;
@protocol SECTTNetAuditLogDelegate;

@interface SECTTNetAuditFilter : NSObject

@property (copy, nonatomic) NSDictionary *settings;
@property (copy) NSArray *headerRules;
@property (weak, nonatomic) id<SECTTNetAuditLogDelegate> logger;

+ (id)shared;

- (void)setupWithSettings:(id)a0;
- (unsigned long long)initPerfSample;
- (void)loadHeaderRules;
- (id)auditPipeline:(id)a0;
- (id)rawHeaderRules;
- (unsigned long long)auditPerfSample;
- (BOOL)matchSingleRule:(id)a0 params:(id)a1;
- (id)mergedResult:(id)a0 params:(id)a1;
- (BOOL)matchSingleHost:(id)a0 params:(id)a1;
- (BOOL)matchSinglePath:(id)a0 params:(id)a1;
- (BOOL)matchSingleHostOutShareTokenList:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (BOOL)enabled;

@end
