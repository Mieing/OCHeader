@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_group;

@interface MMLiveGiftResourceEnsuranceTask : NSObject <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) NSString *correlationId;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *workItemGroup;
@property (retain, nonatomic) NSMutableDictionary *invocationCounters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
