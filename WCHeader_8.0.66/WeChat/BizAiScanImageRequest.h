@class BizAiScanImageJsapiInfo, BaseRequest, NSString, NSData, GoodsObject, BizAiScanImageLocation, BizAiScanImageAdInfo;

@interface BizAiScanImageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *imgData;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int sessionid;
@property (nonatomic) unsigned int scanid;
@property (nonatomic) unsigned long long sessionid64;
@property (nonatomic) BOOL isAiCrop;
@property (nonatomic) BOOL isUseAi;
@property (retain, nonatomic) GoodsObject *cropObj;
@property (nonatomic) unsigned int cameraImgW;
@property (nonatomic) unsigned int cameraImgH;
@property (nonatomic) unsigned int isUserCrop;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) BizAiScanImageLocation *location;
@property (retain, nonatomic) BizAiScanImageAdInfo *adInfo;
@property (retain, nonatomic) BizAiScanImageJsapiInfo *jsapiInfo;
@property (nonatomic) unsigned long long sendSvrTime;

+ (void)initialize;

@end
