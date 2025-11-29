@class NSString;

@interface IESECPuzzleOrderPrefetchCreator : NSObject <PuzzleKitViewLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedHelper;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (id)_getMegaWithContext:(id)a0;
- (void)megaObjectToGlobalPropsIfNeededWithContext:(id)a0;
- (void)moveStoreIfNeededWithContext:(id)a0;
- (BOOL)_param:(id)a0 inBlackList:(id)a1;

@end
