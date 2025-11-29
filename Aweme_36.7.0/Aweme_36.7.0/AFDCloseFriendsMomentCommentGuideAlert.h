@class NSMapTable, NSDictionary, NSMutableSet, NSString;

@interface AFDCloseFriendsMomentCommentGuideAlert : NSObject <DUXSheetDelegate, AWEAlertProtocol, AWEFamiliarSettingsSubscriber>

@property (class, readonly, nonatomic) NSMutableSet *shownUIDs;

@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSMapTable *onDismissBlockMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateFamiliarSettings:(id)a0 fromRequest:(BOOL)a1;
+ (void)updateWithFamiliarSetting:(id)a0;

- (void)sheetDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (unsigned long long)maxIndexToShow;
- (id)initWithTrackerParams:(id)a0;
- (id)p_generateSheetWithRootVC:(id)a0;
- (void)p_showAlertWithDismissCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
