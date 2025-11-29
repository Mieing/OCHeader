@class NSString;

@interface BizMsgResortV2ControlInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int controlFlag;
@property (nonatomic) BOOL isControlGroup;
@property (nonatomic) unsigned int controlGroupFlag;
@property (nonatomic) unsigned int showCardFlag;
@property (nonatomic) unsigned int liftReadAreaSize;
@property (retain, nonatomic) NSString *historyBoxWording;
@property (nonatomic) unsigned int outboxKeepPosTime;
@property (nonatomic) unsigned long long resortSceneBitSwitch;
@property (nonatomic) unsigned int hideBoxWhenDelete;
@property (nonatomic) unsigned int resortBlockedWhenClientRunningBack;
@property (nonatomic) unsigned int clearKeepposAfterClientBackIos;
@property (nonatomic) unsigned int reddotExposeEndReport;
@property (nonatomic) unsigned int reddotExposeEndBackground;

+ (void)initialize;

- (void)setReddotExposeEndBackground:(unsigned int)a0;
- (unsigned int)reddotExposeEndBackground;
- (void)setReddotExposeEndReport:(unsigned int)a0;
- (unsigned int)reddotExposeEndReport;
- (void)setClearKeepposAfterClientBackIos:(unsigned int)a0;
- (unsigned int)clearKeepposAfterClientBackIos;
- (void)setResortBlockedWhenClientRunningBack:(unsigned int)a0;
- (unsigned int)resortBlockedWhenClientRunningBack;
- (void)setHideBoxWhenDelete:(unsigned int)a0;
- (unsigned int)hideBoxWhenDelete;
- (void)setResortSceneBitSwitch:(unsigned long long)a0;
- (unsigned long long)resortSceneBitSwitch;
- (void)setOutboxKeepPosTime:(unsigned int)a0;
- (unsigned int)outboxKeepPosTime;
- (void)setHistoryBoxWording:(id)a0;
- (id)historyBoxWording;
- (void)setLiftReadAreaSize:(unsigned int)a0;
- (unsigned int)liftReadAreaSize;
- (void)setShowCardFlag:(unsigned int)a0;
- (unsigned int)showCardFlag;
- (void)setControlGroupFlag:(unsigned int)a0;
- (unsigned int)controlGroupFlag;
- (void)setIsControlGroup:(BOOL)a0;
- (BOOL)isControlGroup;
- (void)setControlFlag:(unsigned int)a0;
- (unsigned int)controlFlag;

@end
