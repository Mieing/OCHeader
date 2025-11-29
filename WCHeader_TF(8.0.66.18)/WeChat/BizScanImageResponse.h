@class NSString, BaseResponse;

@interface BizScanImageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int clientScanId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *descriptionXml;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int imageType;
@property (nonatomic) float x;
@property (nonatomic) float y;

+ (void)initialize;

@end
