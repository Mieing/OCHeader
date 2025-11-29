@class NSString, NSNumber;

@interface IESLiveGiftAnimationUser : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *webcastUid;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *desensitizedUserName;
@property (copy, nonatomic) NSString *userAvater;
@property (copy, nonatomic) NSString *userHonorUrl;
@property (copy, nonatomic) NSString *imIconLevelUrl;
@property (copy, nonatomic) NSString *borderUrl;
@property (retain, nonatomic) NSNumber *honorLevel;
@property (copy, nonatomic) NSString *displayID;

- (void).cxx_destruct;

@end
