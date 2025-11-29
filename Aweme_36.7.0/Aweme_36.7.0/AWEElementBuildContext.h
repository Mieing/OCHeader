@class NSString, NSMutableDictionary, NSMutableSet;

@interface AWEElementBuildContext : NSObject <AWEElementBuildContextProtocol>

@property (retain, nonatomic) NSMutableDictionary *activateInfoMap;
@property (retain, nonatomic) NSMutableDictionary *strategiesMap;
@property (retain, nonatomic) NSMutableSet *removedByServerStrategiesIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActivateInfo:(id)a0 elementID:(id)a1;
- (id)getActivateInfoWithElementID:(id)a0;
- (void)setElementStrategies:(id)a0 elementID:(id)a1;
- (id)getStrategiesWithElementID:(id)a0;
- (id)elementsRemovedByServerStrategies;
- (void)addElementsOfRemovedByServerStrategies:(id)a0;
- (void).cxx_destruct;

@end
