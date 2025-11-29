@interface AEKFilterUpgradeUtils : NSObject

+ (id)resourceWithFilterData:(id)a0;
+ (void)copyFilterInfoFromMainTrack:(id)a0 toMainTrack:(id)a1;
+ (void)upgradeFilterDataWithNLE:(id)a0 publishModel:(id)a1;
+ (id)resourceModelWithSegment:(id)a0 filterId:(id)a1;
+ (BOOL)hasAppliedTemplateWithPublishModel:(id)a0;

@end
