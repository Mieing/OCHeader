@class NSArray, CachalotLayoutModel;

@interface CachalotStructEditInsertOperation : CachalotStructEditOperation

@property (retain, nonatomic) CachalotLayoutModel *anchor;
@property (copy, nonatomic) NSArray *nodesToInsert;
@property (nonatomic) unsigned long long relation;
@property (nonatomic) long long specificIndex;
@property (nonatomic) BOOL anchorParentMode;

- (id)initWithAnchor:(id)a0 nodesToInsert:(id)a1 relation:(unsigned long long)a2 specificIndex:(long long)a3;
- (void)p_prepareAccordingToConfig;
- (id)initWithAnchor:(id)a0 nodesToInsert:(id)a1 relation:(unsigned long long)a2;
- (BOOL)willAffectStruct;
- (id)nlDescription;
- (void).cxx_destruct;
- (void)prepare;

@end
