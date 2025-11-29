@class NSString;

@interface AWEIMConfigManager : NSObject

@property (nonatomic) long long service;
@property (nonatomic) long long thirdPartyService;
@property (nonatomic) long long method;
@property (copy, nonatomic) NSString *fpID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *webSocketAppKey;

+ (BOOL)isPPEEnv;
+ (BOOL)enableAddressBook;
+ (id)imServerURL;
+ (id)emojiReplyDefaultAnimationUrl;
+ (BOOL)isBOEEvn;
+ (BOOL)shouldEnableBOE;
+ (BOOL)shouldEnablePPE;
+ (BOOL)enableWS;
+ (id)webSocketURLs:(id)a0;
+ (BOOL)enableDynamicWebSocketURL;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
