@class NSString, AWEUserAccountCertInfoModel, NSURL, NSNumber;

@interface RTVUserProfile : NSObject <RTVUserProfileInterface>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSURL *avatarURL;
@property (copy, nonatomic) NSString *defaultThumbAvatarURL;
@property (retain, nonatomic) NSURL *mediumAvatarURL;
@property (nonatomic) long long relationStatus;
@property (copy, nonatomic) NSString *imID;
@property (nonatomic) BOOL privateAccount;
@property (nonatomic) long long age;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) BOOL hideLocation;
@property (copy, nonatomic) NSString *schoolName;
@property (nonatomic) unsigned long long schoolVisibleType;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (nonatomic) long long gender;
@property (nonatomic) unsigned long long showGenderStrategy;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSNumber *favoritedCount;
@property (retain, nonatomic) NSNumber *displayedFollowerCount;
@property (retain, nonatomic) NSNumber *followingCount;
@property (copy, nonatomic) NSString *verificationDescription;
@property (copy, nonatomic) NSString *verifiedIconName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileWithID:(id)a0 name:(id)a1 nickName:(id)a2 avatarURL:(id)a3 defaultThumbAvatarURL:(id)a4 mediumAvatarURL:(id)a5;
+ (long long)__relationStatusWithAWEIMUser:(id)a0;
+ (id)profileWithAWEUserModel:(id)a0;
+ (id)profileWithAWEIMUser:(id)a0;

- (id)getInKey;
- (void).cxx_destruct;

@end
