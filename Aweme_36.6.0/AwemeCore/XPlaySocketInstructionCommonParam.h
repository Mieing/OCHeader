@class NSString;

@interface XPlaySocketInstructionCommonParam : NSObject <XPlaySocketInstructionCommonParam>

@property (nonatomic) long long device_id;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *user_id;
@property (copy, nonatomic) NSString *game_id;
@property (copy, nonatomic) NSString *sub_channel;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) long long app_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *func_name;
@property (copy, nonatomic) NSString *app_version;
@property (copy, nonatomic) NSString *room_id;
@property (copy, nonatomic) NSString *device_platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
