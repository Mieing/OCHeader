@class NSArray, NSString;

@interface WASubscriptionMessageRequestListByIDCGIModel : NSObject

@property (retain, nonatomic) NSArray *templateArray;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int popupScene;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *extInfo;

- (void).cxx_destruct;

@end
