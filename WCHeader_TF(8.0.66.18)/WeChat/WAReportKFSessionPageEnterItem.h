@class NSString;

@interface WAReportKFSessionPageEnterItem : WAReportBaseItem

@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) int unreadcount;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned int entryTime;
@property (nonatomic) unsigned long long extendedEnterScene;
@property (copy, nonatomic) NSString *extendedEnterSceneNote;
@property (copy, nonatomic) NSString *fromAppId;

- (id)reportString;
- (void).cxx_destruct;

@end
