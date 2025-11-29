@class NSString;

@interface MPPageFastLoadCacheCleaner : NSObject <MMCacheCleaner>

@property BOOL isCleaning;
@property BOOL markedCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fastloadImagePath;
- (unsigned long long)cleanFastloadImageForSize:(unsigned long long)a0;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)a0;
- (void)cancelClean;
- (void)onDefaultClean:(int)a0;

@end
