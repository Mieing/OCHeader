@class NSMutableArray, NSString, ExposureInfo, BaseResponse;

@interface BusiF2FSucPageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned long long activityType;
@property (retain, nonatomic) ExposureInfo *exposureInfo;
@property (nonatomic) unsigned long long receivedAmount;
@property (retain, nonatomic) NSMutableArray *favorDescList;
@property (nonatomic) unsigned int showFavorFlag;
@property (nonatomic) unsigned int showReceivedAmountFlag;
@property (retain, nonatomic) NSString *totalFavorDesc;
@property (retain, nonatomic) NSString *noticeWording;
@property (retain, nonatomic) NSString *noticeColor;
@property (nonatomic) BOOL faultRetry;

+ (void)initialize;

@end
