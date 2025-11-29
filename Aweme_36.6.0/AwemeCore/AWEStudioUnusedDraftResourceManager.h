@class ACCThreadSafeMutableDictionary;

@interface AWEStudioUnusedDraftResourceManager : NSObject

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *resourceTimeCache;

+ (id)sharedManager;

- (void)processDraftsResources;
- (BOOL)filePath:(id)a0 matchesPattern:(id)a1;
- (id)findMatchedPatternForFile:(id)a0;
- (BOOL)isResourceUnused:(id)a0;
- (id)convertResourceNodesToPathStrings:(id)a0 draftFolder:(id)a1;
- (id)referencedResourcePathsInDraftFolder:(id)a0;
- (id)loadPendingDeleteDateForResource:(id)a0;
- (void)savePendingDeleteDateForResource:(id)a0;
- (id)moveResourceToTmpDirectory:(id)a0;
- (id)shouldSoftDeleteFile:(id)a0 referencedPaths:(id)a1;
- (void)softDeleteResource:(id)a0;
- (void)rollbackUnusedResourcesInDraft:(id)a0;
- (void)softDeleteResourcesInDraftFolder:(id)a0;
- (void)processSingleDraftResources:(id)a0;
- (void)removePendingDeleteDateForResource:(id)a0;
- (id)latestAccessTimeOfDirectory:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
