@class NSString, NSArray;

@interface AWEOpenPlatformUserInfoItem : NSObject

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSArray *avatarUrlList;
@property (nonatomic) BOOL granted;
@property (nonatomic) BOOL virtualed;
@property (retain, nonatomic) NSString *identityId;
@property (nonatomic) BOOL isSystemProfile;

- (id)initWithNickname:(id)a0 avatarUrlList:(id)a1 granted:(BOOL)a2 virtualed:(BOOL)a3 identityId:(id)a4 isSystemProfile:(BOOL)a5;
- (void).cxx_destruct;

@end
