@class NSString;

@interface IESECUserTrackerManager : NSObject <IESECMarketingService, IESECUserTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enterToPage:(id)a0;
+ (void)hidePendantIfNeedFromPage:(id)a0;
+ (void)leaveFromPage:(id)a0;
+ (void)postAction:(id)a0 type:(long long)a1 atPage:(id)a2;
+ (void)showPendantIfNeededAtPage:(id)a0;
+ (void)registerPendantDataChangedListener:(id)a0 pageID:(id)a1 callback:(id /* block */)a2;
+ (void)unRegisterPendantDataChangedListener:(id)a0 pageID:(id)a1;
+ (void)initTrackerModule;
+ (void)registerPendantStatusChangedListener:(id)a0 pageID:(id)a1 callback:(id /* block */)a2;
+ (void)unRegisterPendantStatusChangedListener:(id)a0 pageID:(id)a1;
+ (void)postAction:(id)a0 type:(long long)a1 atPage:(id)a2 isDispatch:(BOOL)a3;


@end
