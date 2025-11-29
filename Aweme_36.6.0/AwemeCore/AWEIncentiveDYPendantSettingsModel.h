@class NSString, NSArray, AWEIncentiveDYPendantDelConfModel, AWEIncentiveDYPendantEdgeConfModel, AWEIncentiveDYPendantCountDownModel;

@interface AWEIncentiveDYPendantSettingsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pendantID;
@property (retain, nonatomic) AWEIncentiveDYPendantEdgeConfModel *edgeConfModel;
@property (retain, nonatomic) AWEIncentiveDYPendantCountDownModel *countDownModel;
@property (copy, nonatomic) NSArray *resourceURLArray;
@property (copy, nonatomic) NSString *resourceMD5;
@property (retain, nonatomic) AWEIncentiveDYPendantDelConfModel *delConfModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)edgeConfModelJSONTransformer;
+ (id)countDownModelModelJSONTransformer;
+ (id)delConfModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
