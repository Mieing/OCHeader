@class BaseRequest, NSString, NSData;

@interface MMQQShakeMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int endflag;
@property (nonatomic) unsigned int encodeType;

+ (void)initialize;

@end
