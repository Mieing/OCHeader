@class NSString, ExposureInfo, BaseResponse;

@interface GetLotteryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) ExposureInfo *exposureInfo;
@property (retain, nonatomic) NSString *alertWording;

+ (void)initialize;

@end
