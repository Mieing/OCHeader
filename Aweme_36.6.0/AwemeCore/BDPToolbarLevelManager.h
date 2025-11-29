@class NSHashTable;

@interface BDPToolbarLevelManager : NSObject

@property (retain, nonatomic) NSHashTable *levelControls;

+ (id)sharedInstance;

- (void)handleLevelControl:(id)a0 toAdd:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
