@interface AWEFeedGameTargetUserModel : NSObject

@property (nonatomic) BOOL isTargetUser;
@property (nonatomic) long long targetUserExpireTime;

+ (id)modelWithJson:(id)a0;

@end
