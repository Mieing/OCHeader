@class NSString;

@interface AWEPlayInteractionBottomContainerConfig : NSObject <AWEPlayInteractionContainerConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoStatus;
+ (unsigned long long)senceTypeWithReferString:(id)a0 enterFrom:(id)a1;
+ (id)generateElementWithSceneType:(unsigned long long)a0;
+ (id)generateNonPriorityElementWithSceneType:(unsigned long long)a0;
+ (id)adjustPriorityWithinHotSpotChannel;
+ (id)classAndPriorityDictionary;
+ (id)classNonPriorityDictionary;
+ (Class)aAWEFeedBottomBarDOUYINHTSAdapterClass;
+ (id)getHTSBottomBars;
+ (id)businessRelatedBars;
+ (id)consumptionRelatedBar;
+ (id)otherBar;
+ (id)nonPriorityBars;
+ (id)elementsDictionaryWithAweme:(id)a0;
+ (id)elementsDictionary:(id)a0 enterFrom:(id)a1;
+ (id)elementsDictionaryWithNoPriority:(id)a0 enterFrom:(id)a1;
+ (id)ascendingKeyArrayByPriority:(id)a0;
+ (id)descendingKeyArrayByPriority:(id)a0;
+ (BOOL)needFilterElement:(id)a0 referString:(id)a1 enterFrom:(id)a2;

- (id)aAWEFeedBottomBarDOUYINHTSAdapter;

@end
