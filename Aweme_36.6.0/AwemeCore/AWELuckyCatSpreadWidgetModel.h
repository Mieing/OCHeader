@class NSDictionary, NSString;

@interface AWELuckyCatSpreadWidgetModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *rewardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
