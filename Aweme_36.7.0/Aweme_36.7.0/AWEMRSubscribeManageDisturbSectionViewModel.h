@class NSError, AWEMRSubscribeCounterMap, NSString;

@interface AWEMRSubscribeManageDisturbSectionViewModel : AWEBaseListSectionViewModel <AWEMRSubscribeCounterObserver>

@property (retain, nonatomic) AWEMRSubscribeCounterMap *counterMap;
@property (retain, nonatomic) NSError *networkError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
