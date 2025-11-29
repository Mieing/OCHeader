@class NSString;

@interface WCSnsCacheCleaner : NSObject <MMCacheCleaner> {
    BOOL _cancelled;
}

@property (readonly, nonatomic) BOOL enableAutoCleanCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (long long)mediaCacheMinRetentionPeriod;
- (unsigned long long)doCleanPart:(id)a0 targetSize:(unsigned long long)a1 hardLimit:(long long)a2;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)a0;
- (void)cancelClean;

@end
