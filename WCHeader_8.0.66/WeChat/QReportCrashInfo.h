@class NSString, NSException;

@interface QReportCrashInfo : NSObject

@property (nonatomic) int source;
@property (copy, nonatomic) NSString *package_name;
@property (copy, nonatomic) NSString *process;
@property (copy, nonatomic) NSString *thread;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *crash_address;
@property (copy, nonatomic) NSException *stack_trace;
@property (copy, nonatomic) NSString *extra_message;
@property (nonatomic) int crash_category;
@property (nonatomic) int crash_type;
@property (copy, nonatomic) NSString *crash_sub_type;
@property (copy, nonatomic) NSString *module_name;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long duration;
@property (nonatomic) long long crash_time;
@property (copy, nonatomic) NSString *crash_uuid;
@property (copy, nonatomic) NSString *user_id;
@property (copy, nonatomic) NSString *device_id;
@property (copy, nonatomic) NSString *map_key;
@property (copy, nonatomic) NSString *nav_key;
@property (copy, nonatomic) NSString *map_version;
@property (copy, nonatomic) NSString *nav_version;
@property (copy, nonatomic) NSString *ext;
@property (copy, nonatomic) NSString *session_uuid;
@property (copy, nonatomic) NSString *os_version;

- (void).cxx_destruct;

@end
