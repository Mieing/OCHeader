@class NSArray, NSString;

@interface AWELifeLiveMessageDrawLotteryResult : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *luckyUids;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *lotteryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
