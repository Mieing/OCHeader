@class AWEYapLotteryResultInfo, NSArray, NSString, AWEIMDouyinRedPacketUserInfo, AWEIMDouyinRedPacketModel, AWEIMDouyinRedPacketEmoticonModel, AWEYapRPDetailPromotionInfo;

@interface AWEIMDouyinRedPacketDetailResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *users;
@property (nonatomic) long long minTime;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *userInfo;
@property (copy, nonatomic) NSString *merchantId;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (copy, nonatomic) NSString *recordUrl;
@property (retain, nonatomic) AWEIMDouyinRedPacketEmoticonModel *emoticonModel;
@property (copy, nonatomic) NSArray *emoticonModels;
@property (retain, nonatomic) AWEYapRPDetailPromotionInfo *detailPromotionInfo;
@property (retain, nonatomic) AWEYapLotteryResultInfo *lotteryResultInfo;

+ (id)userInfoJSONTransformer;
+ (id)infoJSONTransformer;
+ (id)usersJSONTransformer;
+ (id)detailPromotionInfoJSONTransformer;
+ (id)lotteryResultInfoJSONTransformer;
+ (id)emoticonModelJSONTransformer;
+ (id)emoticonModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
