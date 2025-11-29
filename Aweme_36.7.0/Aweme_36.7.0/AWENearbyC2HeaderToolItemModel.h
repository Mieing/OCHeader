@class NSString, NSArray, AWENearbyC2HeaderToolItemActionModel, AWENearbyC2HeaderToolItemRedDotModel, AWENearbyGrouponBubbleModel, NSDictionary;

@interface AWENearbyC2HeaderToolItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleWeight;
@property (copy, nonatomic) NSArray *entranceConfig;
@property (retain, nonatomic) AWENearbyC2HeaderToolItemActionModel *action;
@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) AWENearbyC2HeaderToolItemRedDotModel *redDot;
@property (copy, nonatomic) AWENearbyGrouponBubbleModel *bubble;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *btmDCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)actionJSONTransformer;
+ (id)entranceConfigJSONTransformer;
+ (id)bubbleJSONTransformer;

- (void).cxx_destruct;

@end
