@class NSString, GoodsObject, BaseResponse;

@interface BizAiScanImageSceneResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int aiscanJumpType;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) GoodsObject *matchObj;
@property (nonatomic) unsigned long long sessionid64;
@property (nonatomic) unsigned int catId;
@property (nonatomic) unsigned int seqNum;
@property (retain, nonatomic) NSString *jumpKeyword;

+ (void)initialize;

@end
