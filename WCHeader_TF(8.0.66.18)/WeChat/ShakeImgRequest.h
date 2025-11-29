@class BaseRequest;

@interface ShakeImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int imgId;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int totalLen;

+ (void)initialize;

@end
