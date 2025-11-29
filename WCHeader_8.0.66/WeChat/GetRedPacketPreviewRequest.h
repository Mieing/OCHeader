@class BaseRequest, NSString;

@interface GetRedPacketPreviewRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *materialId;

+ (void)initialize;

@end
