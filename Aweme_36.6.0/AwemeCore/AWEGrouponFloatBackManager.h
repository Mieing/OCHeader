@class NSString, NSMapTable;

@interface AWEGrouponFloatBackManager : NSObject <AWENearbyContainerEventMessage, AWEGrouponFloatBackProtocol>

@property (retain, nonatomic) NSMapTable *mapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getFloatBackBottomWithPositionScene:(long long)a0 customBottomOffset:(long long)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)nearbyContainerDidDisappear;
- (void)changeAttachView:(id)a0 fromView:(id)a1;
- (void)removeFloatBackViewIfNeedByFeedScrolledItem:(id)a0 attachView:(id)a1;
- (void)updateBackViewPositionScene:(long long)a0 attachView:(id)a1;
- (void)foldFloatBackViewIfNeedByScrollView:(id)a0 attachView:(id)a1;
- (void)removeNoneResidentFloatBackViewIfNeedByScrollView:(id)a0 attachView:(id)a1;
- (void)dismissAllFloatBackIfNeed;
- (id)showFloatBackView:(id)a0 attachView:(id)a1;
- (void)floatBackDefaultAction:(id)a0 attachView:(id)a1;
- (void)dismissFloatBackIfNeedWithAttachView:(id)a0;
- (void)handleNotifyRefreshPrepageWith:(id)a0;
- (void)dismissAllNoneResidentFloatBackIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
