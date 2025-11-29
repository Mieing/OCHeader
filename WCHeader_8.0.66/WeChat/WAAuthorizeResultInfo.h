@class NSString;

@interface WAAuthorizeResultInfo : NSObject

@property (nonatomic) unsigned int avatarId;
@property (nonatomic) unsigned long long scopeId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int avatarOpt;
@property (nonatomic) BOOL isAcceptUserPrivacyProtectInfo;

- (id)init;
- (void).cxx_destruct;

@end
