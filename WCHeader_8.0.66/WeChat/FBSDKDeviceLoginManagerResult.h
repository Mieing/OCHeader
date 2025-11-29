@class FBSDKAccessToken;

@interface FBSDKDeviceLoginManagerResult : NSObject

@property (readonly, nonatomic) FBSDKAccessToken *accessToken;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (id)initWithToken:(id)a0 isCancelled:(BOOL)a1;
- (void).cxx_destruct;

@end
