@class NSString, NSNumber;

@interface AWELiveLocalLifeLotteryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lotteryId;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *drawTime;
@property (copy, nonatomic) NSString *iconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
