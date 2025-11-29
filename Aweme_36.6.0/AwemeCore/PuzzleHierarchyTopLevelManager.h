@class BDXThreadSafeArray;

@interface PuzzleHierarchyTopLevelManager : NSObject {
    BDXThreadSafeArray *_containerList;
    BDXThreadSafeArray *_nonContainerList;
}

+ (id)sharedInstance;

- (void)forceUseTopLevelForViewController:(id)a0 topLevel:(BOOL)a1;
- (BOOL)isForceUseTopLevel;
- (BOOL)isForceDisableTopLevel;
- (void)setTopLovel:(id)a0 value:(unsigned long long)a1;
- (id)_lastContainer;
- (BOOL)isNonContainerForceUseTopLevel;
- (void)_cleanNilObjects;
- (void).cxx_destruct;
- (id)init;

@end
