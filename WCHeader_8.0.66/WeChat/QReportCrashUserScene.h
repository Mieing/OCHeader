@class NSString;

@interface QReportCrashUserScene : NSObject

@property (copy, nonatomic) NSString *scene_name;
@property (copy, nonatomic) NSString *session_uuid;
@property (copy, nonatomic) NSString *user_id;
@property (copy, nonatomic) NSString *device_id;
@property (copy, nonatomic) NSString *map_key;
@property (copy, nonatomic) NSString *nav_key;
@property (copy, nonatomic) NSString *map_version;
@property (copy, nonatomic) NSString *nav_version;

- (void).cxx_destruct;

@end
