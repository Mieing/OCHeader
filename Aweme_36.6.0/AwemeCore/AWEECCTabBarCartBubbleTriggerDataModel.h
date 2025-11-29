@class AWEECTabBarCartBadgeModel, NSString, AWEECTabBarCartBubbleModel;

@interface AWEECCTabBarCartBubbleTriggerDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECTabBarCartBubbleModel *bubbleModel;
@property (retain, nonatomic) AWEECTabBarCartBadgeModel *badgeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
