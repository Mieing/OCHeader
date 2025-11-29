@class NSString;

@interface ACCImageAlbumItemBaseItemModel : MTLModel

@property (readonly, copy, nonatomic) NSString *taskId;

- (id)initWithTaskId:(id)a0;
- (BOOL)didInfosChangedWithTarget:(id)a0;
- (void)amazingMigrateResourceToNewDraftWithTaskId:(id)a0;
- (void)updateRecoveredEffectIfNeedWithIdentifier:(id)a0 filePath:(id)a1;
- (void)deepCopyValuesIfNeedFromTarget:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
