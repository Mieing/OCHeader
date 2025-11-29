@class NSString;

@interface AWENewUserFeedStaticModel : NSObject

@property (copy, nonatomic) NSString *gid;
@property (nonatomic) unsigned long long action;
@property (nonatomic) long long channel_id;
@property (nonatomic) long long action_time;
@property (copy, nonatomic) NSString *follow_user_id;

- (id)stringForReport;
- (void).cxx_destruct;

@end
