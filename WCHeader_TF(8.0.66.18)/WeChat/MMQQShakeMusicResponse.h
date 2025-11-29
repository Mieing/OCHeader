@class NSString, NSMutableArray, BaseResponse;

@interface MMQQShakeMusicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int interval;
@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) unsigned int endflag;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *music;

+ (void)initialize;

@end
