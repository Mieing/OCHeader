@class NSString, WCFinderContactExtInfo;

@interface WCFinderContactCreateCGIParam : NSObject

@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *headImageURL;
@property (retain, nonatomic) WCFinderContactExtInfo *contactExtInfo;
@property (retain, nonatomic) WCFinderContactExtInfo *registerInfo;
@property (nonatomic) BOOL notShowLocation;
@property (nonatomic) BOOL notShowSex;
@property (nonatomic) BOOL showInWXProfile;
@property (nonatomic) BOOL dontRecommendToFriends;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *fromWxUsername;
@property (copy, nonatomic) NSString *sourceID;
@property (nonatomic) unsigned int createSceneUserType;
@property (nonatomic) unsigned long long createSceneFeedId;

- (void).cxx_destruct;

@end
