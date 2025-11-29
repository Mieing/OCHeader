@class NSString, NSSet, NSError, NSDate;

@interface FBSDKLoginCompletionParameters : NSObject

@property (copy, nonatomic) NSString *accessTokenString;
@property (copy, nonatomic) NSSet *permissions;
@property (copy, nonatomic) NSSet *declinedPermissions;
@property (copy, nonatomic) NSSet *expiredPermissions;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *dataAccessExpirationDate;
@property (copy, nonatomic) NSString *challenge;

- (id)init;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;

@end
