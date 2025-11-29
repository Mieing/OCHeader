@class NSString, NSArray;

@interface AWELuckyCatFeedVVConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *VVType;
@property (nonatomic) double speedRate;
@property (copy, nonatomic) NSArray *speedRates;
@property (nonatomic) long long intervalTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
