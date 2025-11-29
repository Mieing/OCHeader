@class NSNumber, NSString;

@interface IESECShopRecommendLogInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *commodityType;
@property (copy, nonatomic) NSString *recommendInfo;
@property (copy, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
