@class AWEIMDouyinRedPacketModel, NSString, AWEIMDouyinRedPacketUserInfo;

@interface AWEIMDouyinRedPacketInfoResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *user;
@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (nonatomic) BOOL isOpenedRedpacket;
@property (nonatomic) BOOL isPromotionShareEnded;

+ (id)userJSONTransformer;
+ (id)infoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
