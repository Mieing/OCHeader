@class OnlineInfo, NSNumber;

@interface MultiDeviceManageInfo : NSObject

@property (retain, nonatomic) OnlineInfo *onlineInfo;
@property (retain, nonatomic) NSNumber *cachedLock;
@property (retain, nonatomic) NSNumber *cachedAutoLoginEnabled;
@property (retain, nonatomic) NSNumber *cachedKeepAliveEnabled;
@property (nonatomic, getter=isAutoLoginEnabled) BOOL autoLoginEnabled;
@property (nonatomic, getter=isKeepAliveEnabled) BOOL keepAliveEnabled;

- (id)initWithOnlineInfo:(id)a0;
- (BOOL)isEqualToManageInfo:(id)a0;
- (id)iconImage;
- (id)bigIconImage;
- (BOOL)isMute;
- (BOOL)isLocked;
- (void)setLock:(BOOL)a0;
- (BOOL)showAutoLoginEntrance;
- (void)resolveContentWithCompletionBlock:(id /* block */)a0;
- (id)helpURL;
- (id)exitTitle;
- (id)exitConfirmButtonTitle;
- (id)logoutButtonTitle;
- (id)autoLoginSwitchTip;
- (id)displayDeviceType;
- (id)displayDeviceName;
- (void).cxx_destruct;

@end
