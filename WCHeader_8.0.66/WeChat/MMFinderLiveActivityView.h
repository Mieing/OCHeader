@class WCFinderDataItem, NSString;

@interface MMFinderLiveActivityView : UIImageView <MMFinderLiveInfoMgrExt>

@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (nonatomic) unsigned long long activityType;
@property (nonatomic) BOOL hasRegisteredFetchLiveActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)willMoveToWindow:(id)a0;
- (void)registerFetchLiveActivity;
- (void)checkAndUnregisterFetchLiveActivity;
- (void)updateFinderDataItem:(id)a0;
- (void)clearAndHide;
- (void)onFinderLiveActivityType:(unsigned long long)a0 tid:(id)a1;
- (void).cxx_destruct;

@end
