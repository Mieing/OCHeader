@class NSString, NSDictionary;

@interface WCBusinessJumpCallbackInfo : NSObject

@property (nonatomic) long long sceneValue;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *callbackUrl;
@property (retain, nonatomic) NSDictionary *extInfo;

- (void).cxx_destruct;

@end
