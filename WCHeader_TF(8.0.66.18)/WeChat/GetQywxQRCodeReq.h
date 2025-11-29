@class BaseRequest, NSString;

@interface GetQywxQRCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *poi;
@property (retain, nonatomic) NSString *qrExtInfo;
@property (retain, nonatomic) NSString *backup;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSString *snsAid;

+ (void)initialize;

@end
