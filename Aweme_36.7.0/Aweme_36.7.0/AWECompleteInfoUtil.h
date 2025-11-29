@class NSNumber, NSString;

@interface AWECompleteInfoUtil : NSObject <AWECompleteInfoUtilProtocol>

@property (nonatomic) BOOL canShowCompleteInfoBubble;
@property (nonatomic) BOOL isAvatarCompleted;
@property (copy, nonatomic) NSNumber *profileCompletionRate;
@property (copy, nonatomic) NSString *titleForProfileCompletionBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (float)getCompletionPercentWithUser:(id)a0 avatarImage:(id)a1 avatarUrl:(id)a2;
+ (void)setUserCompleteProfileDictWithShownKey:(BOOL)a0 expireDate:(float)a1;
+ (BOOL)avatarCompletedWithImage:(id)a0 avatarUrl:(id)a1;
+ (BOOL)shouldShowInUserProfileWithAvatarImage:(id)a0 avatarUrl:(id)a1;
+ (void)markUserProfileEditNoticeViewAsShowed;
+ (void)updateCompleteProfileInfoTipStringWithAvatarImage:(id)a0 avatarUrl:(id)a1;
+ (BOOL)completedInfoWithAvatarImage:(id)a0 avatarUrl:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
