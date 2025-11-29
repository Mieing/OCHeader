@class NSString;

@interface AWECommerceABTestInterface : HTSService <AWECommerceABTestInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportSearchSource;
+ (id)supportCommerceTrackCommonLabels;
+ (id)supportFeedEventNameArray;
+ (BOOL)enableCommentLinkAbility;
+ (BOOL)commerceAgingAdapt;
+ (BOOL)enableLongPressGuideDelayShow;
+ (BOOL)shouldShowSearchCommentArea;
+ (BOOL)shouldUseAdAppLinkSdk;
+ (BOOL)enableRetainSkvcAvoidCrash;
+ (long long)douPlusLongPressPanelGroup;
+ (BOOL)liveWindCardShouldUseLynxABTest;
+ (BOOL)enableAutoTracker;
+ (long long)playRecordSecond;
+ (BOOL)showNewLongPressAdExperience;
+ (BOOL)fetchCountOnlySuccess;
+ (id)supportSearchSourceRefresh;
+ (BOOL)shouldShowSearchZeroPersonAppointment;


@end
