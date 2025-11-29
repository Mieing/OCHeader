@class CMCAwemeDetailScene, CMCSceneController, CMCFeedScene, CMCProfileScene, CMCSearchScene, CMCAwemeScene, CMCChallengeScene;

@interface CMCScene : CMCObject

@property (class, readonly, nonatomic) CMCFeedScene *feed;
@property (class, readonly, nonatomic) CMCChallengeScene *challenge;
@property (class, readonly, nonatomic) CMCProfileScene *profile;
@property (class, readonly, nonatomic) CMCSearchScene *search;
@property (class, readonly, nonatomic) CMCAwemeDetailScene *awemeDetail;
@property (class, readonly, nonatomic) CMCAwemeScene *aweme;

@property (weak, nonatomic) CMCScene *parentScene;
@property (readonly, nonatomic) CMCSceneController *controller;

+ (id)makeWithParentScene:(id)a0;
+ (Class)controllerClass;
+ (id)make;

- (id)rootScene;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
