@class NSString;

@interface MMWebViewCacheCleaner : NSObject <MMCacheCleaner>

@property (nonatomic) BOOL cancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)clearWebViewCaches:(unsigned long long)a0;
- (unsigned long long)clearWebKitStorage;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)a0;
- (void)cancelClean;
- (unsigned long long)cleanFilesByLRU:(id)a0 cleanSize:(unsigned long long)a1;

@end
