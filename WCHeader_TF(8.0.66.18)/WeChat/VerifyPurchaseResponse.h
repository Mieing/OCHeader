@class NSString, BaseResponse;

@interface VerifyPurchaseResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *seriesId;
@property (nonatomic) unsigned int bizType;
@property (nonatomic) int isDeleteReceipt;

+ (void)initialize;

@end
