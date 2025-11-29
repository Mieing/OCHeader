@class NSString, NSSet, NSDate;

@interface FBSDKAccessToken : NSObject <FBSDKCopying, NSSecureCoding>

@property (class, copy, nonatomic) FBSDKAccessToken *currentAccessToken;
@property (class, readonly, nonatomic, getter=isCurrentAccessTokenActive) BOOL currentAccessTokenIsActive;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSDate *dataAccessExpirationDate;
@property (readonly, copy, nonatomic) NSSet *declinedPermissions;
@property (readonly, copy, nonatomic) NSSet *expiredPermissions;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSSet *permissions;
@property (readonly, copy, nonatomic) NSDate *refreshDate;
@property (readonly, copy, nonatomic) NSString *tokenString;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isDataAccessExpired) BOOL dataAccessExpired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)refreshCurrentAccessToken:(id /* block */)a0;

- (id)initWithTokenString:(id)a0 permissions:(id)a1 declinedPermissions:(id)a2 expiredPermissions:(id)a3 appID:(id)a4 userID:(id)a5 expirationDate:(id)a6 refreshDate:(id)a7 dataAccessExpirationDate:(id)a8;
- (BOOL)hasGranted:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAccessToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
