@class NSString, NSMutableDictionary, NSMutableSet, NSDictionary;

@interface MMLiveBeautyBadgeCollection : NSObject <MMLiveBeautyBadgeItemExt>

@property (retain, nonatomic) NSString *collectionId;
@property (retain, nonatomic) NSMutableDictionary *containedBadges;
@property (retain, nonatomic) NSMutableSet *activeBadges;
@property (readonly, nonatomic) NSDictionary *badges;
@property (readonly, nonatomic) BOOL containsActiveBadges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCollectionId:(id)a0;
- (void)addEventSubscriber:(id)a0;
- (void)removeEventSubscriber:(id)a0;
- (void)addBadge:(id)a0;
- (void)addBadges:(id)a0;
- (void)onBeautyBadgeDismissed:(id)a0;
- (void).cxx_destruct;

@end
