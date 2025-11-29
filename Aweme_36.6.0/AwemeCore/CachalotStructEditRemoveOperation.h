@class NSArray, CachalotLayoutModel;

@interface CachalotStructEditRemoveOperation : CachalotStructEditOperation

@property (retain, nonatomic) CachalotLayoutModel *anchor;
@property (copy, nonatomic) NSArray *nodesToRemove;

- (void)p_prepareAccordingToConfig;
- (BOOL)willAffectStruct;
- (id)nlDescription;
- (id)initWithAnchor:(id)a0 nodesToRemove:(id)a1;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithAnchor:(id)a0;

@end
