@class NSString, AWEIMDouyinRedPacketYapmentInfoModel;

@interface AWEIMDouyinRedPacketSendResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEIMDouyinRedPacketYapmentInfoModel *info;
@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (copy, nonatomic) NSString *businessTitle;

+ (id)infoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
