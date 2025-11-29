@class NSString;

@interface WAPageFlowSessionInfo : MMObject

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned long long preScene;
@property (copy, nonatomic) NSString *preSceneNote;
@property (nonatomic) int hostScene;
@property (nonatomic) unsigned long long chatType;
@property (nonatomic) unsigned long long codeScene;
@property (copy, nonatomic) NSString *referPageOfHomePage;
@property (nonatomic) BOOL isTriggerDownloaded;
@property (nonatomic) unsigned long long targetActionType;
@property (copy, nonatomic) NSString *targetActionNote;
@property (copy, nonatomic) NSString *referAction;

- (id)initWithSessionPrefix:(id)a0 hostScene:(int)a1;
- (void).cxx_destruct;

@end
