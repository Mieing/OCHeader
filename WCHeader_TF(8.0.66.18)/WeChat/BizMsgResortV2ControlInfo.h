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

@end
