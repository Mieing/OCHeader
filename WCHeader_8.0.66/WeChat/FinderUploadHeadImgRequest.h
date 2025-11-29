@class BaseRequest, NSData, NSString;

@interface FinderUploadHeadImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *imgMd5;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
