@class NSError, AWEMRSubscribeCounterMap, NSString;

@interface AWEMRSubscribeManageCategorySectionViewModel : AWEBaseListSectionViewModel <AWEMRSubscribeCounterObserver>

@property (retain, nonatomic) AWEMRSubscribeCounterMap *counterMap;
@property (retain, nonatomic) NSError *networkError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)counterDidReset:(id)a0;
- (void)updatesChannelSubscribeStatusTo:(id)a0 subcategory:(id)a1;
- (void)updatesSubcategorySubscribeStatusWithRequestModel:(id)a0 subcategory:(id)a1;
- (id)getSubcategoryOfSubcategoryId:(id)a0;
- (void).cxx_destruct;

@end
