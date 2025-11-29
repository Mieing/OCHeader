@class NSMutableArray, NSString, ExposureInfo, BaseResponse;

@interface WABizF2FSuccPageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) ExposureInfo *exposureInfo;
@property (nonatomic) unsigned long long receivedAmount;
@property (nonatomic) unsigned int showReceivedAmountFlag;
@property (retain, nonatomic) NSMutableArray *favorDescList;
@property (nonatomic) unsigned int showFavorFlag;
@property (retain, nonatomic) NSString *totalFavorDesc;
@property (retain, nonatomic) NSString *noticeWording;
@property (retain, nonatomic) NSString *noticeColor;
@property (retain, nonatomic) NSString *noticeUrl;

+ (void)initialize;

@end
