@class AffMigTaskProgressModel, AffMigTaskSceneModel, RoamMigrationInfo, AffMigTaskStatusModel, AffMigAuthConfigModel;

@interface AffMigModelHolder : WXPBGeneratedMessage

@property (retain, nonatomic) AffMigTaskSceneModel *sceneModel;
@property (retain, nonatomic) AffMigTaskStatusModel *statusModel;
@property (retain, nonatomic) AffMigTaskProgressModel *progressModel;
@property (retain, nonatomic) AffMigAuthConfigModel *authModel;
@property (retain, nonatomic) RoamMigrationInfo *roamMigInfo;

+ (void)initialize;

@end
