@class NSString;

@interface AWEOpenPlatformMutleUserInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *secUserId;
@property (nonatomic) BOOL checked;

- (id)initWithName:(id)a0 avatarURL:(id)a1 mobile:(id)a2 secUserId:(id)a3 checked:(BOOL)a4;
- (void).cxx_destruct;

@end
