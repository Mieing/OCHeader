@class NSString, LiveAccountSwitchModel;

@interface AWEECSaaSLiveGoodsJump : NSObject

@property (copy, nonatomic) NSString *nextURLQueryString;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *nextURLString;
@property (copy, nonatomic) NSString *convertedSecUID;
@property (nonatomic) BOOL isInList;
@property (nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) LiveAccountSwitchModel *switchModel;
@property (copy, nonatomic) NSString *modifiedNextURLString;
@property (nonatomic) BOOL isStartLive;

- (void).cxx_destruct;

@end
