@class NSString, NSURL, NSDate;

@interface FBSDKProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, retain, nonatomic) FBSDKProfile *currentProfile;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *linkURL;
@property (readonly, nonatomic) NSDate *refreshDate;

+ (void)cacheProfile:(id)a0;
+ (id)fetchCachedProfile;
+ (void)enableUpdatesOnAccessTokenChange:(BOOL)a0;
+ (void)loadCurrentProfileWithCompletion:(id /* block */)a0;
+ (void)loadProfileWithToken:(id)a0 completion:(id /* block */)a1;
+ (void)observeChangeAccessTokenChange:(id)a0;

- (id)initWithUserID:(id)a0 firstName:(id)a1 middleName:(id)a2 lastName:(id)a3 name:(id)a4 linkURL:(id)a5 refreshDate:(id)a6;
- (id)imageURLForPictureMode:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToProfile:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
