@class NSString;

@interface AWEPOIReflowResourceComponent : NSObject

@property (nonatomic) BOOL bOpen;
@property (retain, nonatomic) NSString *transSchema;

- (void)setupConfig:(id)a0;
- (id)makeFeedOriginGidInfo;
- (id)makeTransformerTransInfo:(id)a0 sourceType:(long long)a1;
- (id)openSubPageSchema:(id)a0 scene:(long long)a1;
- (id)hostPrefix;
- (BOOL)isLocalLifeReflowSchema:(id)a0;
- (BOOL)switchRouterWithSchema:(id)a0;
- (BOOL)prefixEqual:(id)a0;
- (BOOL)needReplaceSchema:(id)a0;
- (void).cxx_destruct;

@end
