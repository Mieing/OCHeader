@class NSArray, CachalotLayoutModel;

@interface CachalotStructEditUpdateOperation : CachalotStructEditOperation

@property (retain, nonatomic) CachalotLayoutModel *anchor;
@property (copy, nonatomic) NSArray *nodesToUpdate;
@property (nonatomic) unsigned long long updateType;

- (void)p_prepareAccordingToConfig;
- (id)nlDescription;
- (id)initWithAnchor:(id)a0 nodesToUpdate:(id)a1 updateType:(unsigned long long)a2;
- (id)initWithAnchor:(id)a0 updateType:(unsigned long long)a1;
- (BOOL)canRevert;
- (void).cxx_destruct;
- (void)prepare;

@end
