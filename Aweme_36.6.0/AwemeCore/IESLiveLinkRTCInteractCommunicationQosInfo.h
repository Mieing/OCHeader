@class NSLock, NSMutableDictionary;

@interface IESLiveLinkRTCInteractCommunicationQosInfo : NSObject

@property (retain, nonatomic) NSLock *remoteUserLock;
@property (retain, nonatomic) NSMutableDictionary *remoteUserInfo;
@property (nonatomic) long long send_vencode_fps;
@property (nonatomic) long long send_video_loss;
@property (nonatomic) long long send_audio_loss;
@property (nonatomic) long long rtc_app_cpu;
@property (nonatomic) long long rtc_sys_cpu;
@property (nonatomic) long long rtc_app_memory;
@property (nonatomic) long long rtc_sys_memory;

+ (double)appCpuUsage;
+ (double)systemCpuUsage;
+ (double)appMemoryUsage;
+ (double)systemMemoryUsage;

- (id)getInfoDict;
- (void)updateRemoteUser:(id)a0 Values:(id)a1;
- (void)removeAllUser;
- (void)addRemoteUser:(id)a0;
- (void)removeRemoteUser:(id)a0;
- (id)remoteUserInfoJson;
- (void)updateSysInfo;
- (void).cxx_destruct;
- (id)init;
- (void)clearStats;

@end
