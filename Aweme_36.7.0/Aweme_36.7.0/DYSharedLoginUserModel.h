@class NSString, NSArray, NSDictionary, NSDate;

@interface DYSharedLoginUserModel : NSObject <AWEUserCombineLoginUser>

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSArray *avatarURLArray;
@property (retain, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSString *dTicket;
@property (nonatomic) unsigned long long shownType;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSDictionary *phoneInfoDict;
@property (nonatomic) BOOL jumpInCombineLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarUrls;
- (id)nickNameString;
- (BOOL)isSharedLogin;
- (unsigned long long)sharedShowType;
- (id)secUserID;
- (void).cxx_destruct;

@end
