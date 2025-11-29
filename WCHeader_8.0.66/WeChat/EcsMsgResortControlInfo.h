@class NSString;

@interface EcsMsgResortControlInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int controlFlag;
@property (nonatomic) BOOL isControlGroup;
@property (nonatomic) unsigned int controlGroupFlag;
@property (nonatomic) unsigned int showCardFlag;
@property (nonatomic) unsigned int liftReadAreaSize;
@property (retain, nonatomic) NSString *historyBoxWording;
@property (nonatomic) unsigned int outboxKeepPosTime;
@property (nonatomic) unsigned long long resortSceneBitSwitch;

+ (void)initialize;

@end
