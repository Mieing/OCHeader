@class BaseRequest, NSString;

@interface SetPushSoundReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *sound;

+ (void)initialize;

@end
