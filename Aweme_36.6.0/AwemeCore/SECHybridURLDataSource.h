@class NSString, SECStandardURL, SECHybridPiperContext;

@interface SECHybridURLDataSource : NSObject <SECSourceURLDataSource> {
    SECHybridPiperContext *_piper;
    SECStandardURL *_pageURL;
    NSString *_piperName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)standardRefer;
- (id)relatedKeyPath:(id)a0;
- (id)rulerParamsForLog:(id)a0;
- (double)expireInterval;
- (id)extractorKey;
- (id)initWithPiper:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)params;
- (id)type;
- (id)eventType;
- (id)configManager;
- (void)setup;

@end
