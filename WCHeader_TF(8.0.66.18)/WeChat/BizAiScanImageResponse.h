@class NSString, NSData, GoodsObject, BaseResponse;

@interface BizAiScanImageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int aiscanJumpType;
@property (retain, nonatomic) NSString *wxaAppid;
@property (retain, nonatomic) NSString *wxaPath;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) GoodsObject *matchObj;
@property (nonatomic) unsigned int sessionid;
@property (nonatomic) unsigned long long sessionid64;
@property (nonatomic) unsigned int scanid;
@property (nonatomic) BOOL forceJump;
@property (nonatomic) unsigned int catId;
@property (nonatomic) BOOL needUserCrop;
@property (nonatomic) unsigned int clientReturnType;
@property (nonatomic) BOOL needPoi;
@property (retain, nonatomic) NSData *businessBuffer;
@property (nonatomic) unsigned int networkLimitedTime;

+ (void)initialize;

@end
