@class NSDictionary;

@interface IESLiveMultiRoomConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *multiRoomSettingConfig;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL currentRoomDIContextEnable;
@property (retain, nonatomic) NSDictionary *scopeServicePlistConfig;
@property (nonatomic) BOOL globalDIOpt;
@property (nonatomic) BOOL reverseProtectEnable;
@property (nonatomic) BOOL disableCopyAttacherDIContext;
@property (nonatomic) BOOL generalServiceUnbindFix;
@property (nonatomic) BOOL generalServiceUnify;
@property (nonatomic) BOOL enableDICrashOpt;

+ (id)configuration;

- (void).cxx_destruct;
- (id)init;

@end
