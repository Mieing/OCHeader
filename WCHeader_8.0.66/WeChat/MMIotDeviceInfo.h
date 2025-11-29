@class NSString, NSMutableArray, MMIotDeviceExtInfo;

@interface MMIotDeviceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int deviceType;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSMutableArray *supportMsgtypeList;
@property (retain, nonatomic) MMIotDeviceExtInfo *extInfo;

+ (void)initialize;

- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setSupportMsgtypeList:(id)a0;
- (id)supportMsgtypeList;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setNickName:(id)a0;
- (id)nickName;
- (void)setDeviceId:(id)a0;
- (id)deviceId;
- (void)setDeviceType:(unsigned int)a0;
- (unsigned int)deviceType;

@end
