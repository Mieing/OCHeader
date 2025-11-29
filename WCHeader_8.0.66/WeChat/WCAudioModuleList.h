@class NSMutableArray;

@interface WCAudioModuleList : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int unitCapacity;
@property (retain, nonatomic) NSMutableArray *unitArray;

- (id)initWithType:(unsigned int)a0 unitCapacity:(unsigned int)a1;
- (void)addModule:(id)a0 newUnit:(BOOL)a1 notify:(BOOL)a2;
- (void)addModules:(id)a0 newUnit:(BOOL)a1 notify:(BOOL)a2;
- (void)removeModule:(id)a0 notify:(BOOL)a1;
- (void)removeModules:(id)a0 notify:(BOOL)a1;
- (void)removeModulesWithScene:(int)a0 notify:(BOOL)a1;
- (id)getAllModules;
- (id)getFirstUnitModules;
- (id)getLastUnitModules;
- (id)getUnitModulesAtIndex:(unsigned int)a0;
- (unsigned int)moduleCount;
- (unsigned int)unitCount;
- (BOOL)containsModule:(id)a0;
- (id)description;
- (void)asyncNotifyRemoveModules:(id)a0;
- (void)asyncNotifyRemoveModule:(id)a0;
- (void).cxx_destruct;

@end
