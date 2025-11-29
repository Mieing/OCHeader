@class NSString, NSDictionary, UINavigationController;

@interface WAProfileViewControllerParameter : NSObject

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long enterScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned long long exposeFrom;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned long long fromDebugMode;
@property (nonatomic) unsigned int fromAppVersion;
@property (retain, nonatomic) NSDictionary *exposeExtraInfo;
@property (nonatomic) unsigned long long preScene;
@property (copy, nonatomic) NSString *preSceneNote;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL needShowBottomFeedback;
@property (copy, nonatomic) NSString *hostAppid;
@property (copy, nonatomic) NSString *snapShotLocalId;

- (void).cxx_destruct;

@end
