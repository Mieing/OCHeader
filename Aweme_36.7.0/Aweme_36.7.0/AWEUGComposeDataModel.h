@class NSString, AWEUGLocalPushModel, AWEUGRedBadgeModel;

@interface AWEUGComposeDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUGLocalPushModel *localPush;
@property (retain, nonatomic) AWEUGLocalPushModel *inactiveLocalPush;
@property (retain, nonatomic) AWEUGRedBadgeModel *redBadge;
@property (retain, nonatomic) AWEUGRedBadgeModel *inactiveRedBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localPushJSONTransformer;
+ (id)inactiveLocalPushJSONTransformer;
+ (id)redBadgeJSONTransformer;
+ (id)inactiveRedBadgeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
