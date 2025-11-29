@class BaseRequest, NSString, RingBack;

@interface SetRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) RingBack *ringBack;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int newcomMsgDefaultVoiceNumber;
@property (nonatomic) unsigned int extBusinessScene;
@property (retain, nonatomic) NSString *extraInfo;

+ (void)initialize;

@end
