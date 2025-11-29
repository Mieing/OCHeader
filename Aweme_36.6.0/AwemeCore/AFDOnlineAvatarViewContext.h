@class NSString, AWEUserModel;
@protocol AWEIMActiveUserInfoService;

@interface AFDOnlineAvatarViewContext : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long avatarScale;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
