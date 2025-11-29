@class NSString, NSArray, AWEGrouponC2HeaderToolItemActionModel, AWEGrouponC2HeaderToolItemRedDotModel, AWEGrouponBubbleModel, NSDictionary;

@interface AWEGrouponC2HeaderToolItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleWeight;
@property (copy, nonatomic) NSArray *entranceConfig;
@property (retain, nonatomic) AWEGrouponC2HeaderToolItemActionModel *action;
@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) AWEGrouponC2HeaderToolItemRedDotModel *redDot;
@property (copy, nonatomic) AWEGrouponBubbleModel *bubble;
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
