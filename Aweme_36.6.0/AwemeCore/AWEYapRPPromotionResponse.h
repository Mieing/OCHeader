@class NSString, AWEIMDouyinRedPacketUserInfo, AWEYapRPPromotionInfo;

@interface AWEYapRPPromotionResponse : AWEBaseApiModel

@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (retain, nonatomic) AWEYapRPPromotionInfo *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *user;
@property (nonatomic) long long promotionStatus;
@property (copy, nonatomic) NSString *jumpUrl;

+ (id)userJSONTransformer;
+ (id)infoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
