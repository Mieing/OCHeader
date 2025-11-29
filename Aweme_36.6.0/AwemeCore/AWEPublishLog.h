@interface AWEPublishLog : NSObject

+ (void)mainInfoWithAlbumStageType:(id)a0 stageStatus:(long long)a1 content:(id)a2;
+ (void)mainErrorWithAlbumStageType:(id)a0 stageStatus:(long long)a1 content:(id)a2 errorCode:(long long)a3;
+ (void)mainInfoWithStageType:(long long)a0 stageStatus:(long long)a1 content:(id)a2;
+ (void)mainErrorWithStageType:(long long)a0 stageStatus:(long long)a1 content:(id)a2 errorCode:(long long)a3;
+ (id)stageNameWithType:(long long)a0;
+ (void)p_mainInfoWithStageType:(id)a0 stageStatus:(long long)a1 content:(id)a2;
+ (void)p_mainErrorWithStageType:(id)a0 stageStatus:(long long)a1 content:(id)a2 errorCode:(long long)a3;
+ (id)stageNameWithAlbumStageType:(id)a0;
+ (id)stageStageWithStatus:(long long)a0;
+ (void)mainInfoWithContent:(id)a0;

@end
