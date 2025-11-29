@class NSData, NSString, SKBuiltinBuffer_t;

@interface OnlineInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int deviceType;
@property (retain, nonatomic) NSData *deviceId;
@property (retain, nonatomic) NSString *wordingXml;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientKey;
@property (nonatomic) unsigned int onlineStatus;
@property (nonatomic) unsigned int deviceHelperType;
@property (nonatomic) unsigned int clientVersion;
@property (nonatomic) unsigned int iconType;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int stype;
@property (retain, nonatomic) NSString *roamDeviceId;

+ (void)initialize;

- (id)GetWordingForKey:(id)a0;
- (BOOL)isLocked;
- (unsigned long long)GetExtDeviceControls;
- (id)GetOnlineTitle;
- (id)GetUnlockTitle;
- (id)GetOnlineSummaryWording;
- (id)GetOnlineIcon;
- (BOOL)showAutoLoginEntrance;
- (BOOL)isAutoLoginEnabled;
- (BOOL)showKeepAliveEntrance;
- (BOOL)isKeepAliveEnabled;

@end
