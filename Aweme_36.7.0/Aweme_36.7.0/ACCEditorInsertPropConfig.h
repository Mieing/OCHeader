@interface ACCEditorInsertPropConfig : NSObject

+ (BOOL)isEnableEnterMainAlbumWhenSelectEffectStatus;
+ (BOOL)shouldInsertFollowPropWithRepoProp:(id)a0 repoContext:(id)a1 contentSource:(id)a2 isMultiProjects:(BOOL)a3 hasSetByComposer:(BOOL)a4;
+ (BOOL)enableAttachShootSameProp;
+ (BOOL)shouldInsertPropWithRepoContext:(id)a0 contentSource:(id)a1 isMultiProjects:(BOOL)a2 hasSetByComposer:(BOOL)a3;
+ (BOOL)shouldInsertRecordCustomPropWithRepoProp:(id)a0 repoContext:(id)a1 contentSource:(id)a2 isMultiProjects:(BOOL)a3 hasSetByComposer:(BOOL)a4;
+ (BOOL)enableInheritFollowProp;
+ (BOOL)shouldInsertFollowPropWithPublishModel:(id)a0;
+ (BOOL)enableInheritRecorderProp;
+ (BOOL)shouldInsertRecordCustomPropWithPublishModel:(id)a0;

@end
