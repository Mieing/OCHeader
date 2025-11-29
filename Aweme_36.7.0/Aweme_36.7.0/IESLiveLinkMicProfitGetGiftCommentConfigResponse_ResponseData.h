@class GPBInt64Array, NSString;

@interface IESLiveLinkMicProfitGetGiftCommentConfigResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *giftIdsArray;
@property (readonly, nonatomic) unsigned long long giftIdsArray_Count;
@property (nonatomic) long long lastTimeGiftId;
@property (copy, nonatomic) NSString *defaultGuideText;
@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) int status;

+ (id)descriptor;

@end
