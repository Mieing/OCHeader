@class NSString, WCFinderDiskCleanMgr;

@interface MMFinderCacheCleaner : NSObject <MMCacheCleaner>

@property (retain, nonatomic) WCFinderDiskCleanMgr *cleanMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)a0;
- (void)cancelClean;
- (void).cxx_destruct;

@end
