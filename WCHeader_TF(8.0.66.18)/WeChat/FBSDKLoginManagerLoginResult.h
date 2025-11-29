@class FBSDKAccessToken, NSDictionary, NSSet, NSMutableDictionary;

@interface FBSDKLoginManagerLoginResult : NSObject {
    NSMutableDictionary *_mutableLoggingExtras;
}

@property (readonly, nonatomic) NSDictionary *loggingExtras;
@property (nonatomic) BOOL isSkipped;
@property (copy, nonatomic) FBSDKAccessToken *token;
@property (readonly, nonatomic) BOOL isCancelled;
@property (copy, nonatomic) NSSet *grantedPermissions;
@property (copy, nonatomic) NSSet *declinedPermissions;

- (id)initWithToken:(id)a0 isCancelled:(BOOL)a1 grantedPermissions:(id)a2 declinedPermissions:(id)a3;
- (void)addLoggingExtra:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
