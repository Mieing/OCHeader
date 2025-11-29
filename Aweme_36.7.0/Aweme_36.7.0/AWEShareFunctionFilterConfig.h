@interface AWEShareFunctionFilterConfig : NSObject

+ (id)customShareTypesWithContext:(id)a0;
+ (id)unexpectedShareTypesWithContext:(id)a0;
+ (id)channelsFilteredByVibilityForFavoritedWithContext:(id)a0;
+ (id)channelsFilteredByVibilityWithContext:(id)a0;
+ (id)unallowedShareTypesWithContext:(id)a0;
+ (Class)aAWEShareChannelFactoryAdapterClass;
+ (id)forbiddenShareTypesForOverseaUser;
+ (id)newForwardChannelsWithContext:(id)a0;
+ (id)repostChannelsWithContext:(id)a0;
+ (id)longVideoPlayerChannelsWithContext:(id)a0;
+ (BOOL)shouldRemoveQRCodeChannelWithContext:(id)a0;
+ (unsigned long long)sharePanelArrangementStrategy;
+ (id)commonUnallowedShareTypesWithContext:(id)a0;

- (id)aAWEShareChannelFactoryAdapter;

@end
