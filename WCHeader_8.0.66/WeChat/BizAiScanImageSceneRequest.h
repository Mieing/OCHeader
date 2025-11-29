@class NSMutableArray, BaseRequest, BizAiScanImageSearchInfo, NSData, GoodsObject, NSString, BizAiScanImageLocation;

@interface BizAiScanImageSceneRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *imgData;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned long long sessionid64;
@property (retain, nonatomic) GoodsObject *cropObj;
@property (nonatomic) unsigned int seqNum;
@property (retain, nonatomic) BizAiScanImageSearchInfo *searchInfo;
@property (retain, nonatomic) NSString *fromUrl;
@property (retain, nonatomic) BizAiScanImageLocation *location;
@property (nonatomic) long long phashValue;
@property (retain, nonatomic) NSString *phashStr;
@property (retain, nonatomic) NSString *phashVersion;
@property (retain, nonatomic) NSMutableArray *cdnImgs;
@property (retain, nonatomic) NSString *chatUuid;

+ (void)initialize;

@end
