@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageVideoSyncHandler : NSObject <AWEPostPageVideoSyncService>

@property (nonatomic) BOOL videoSyncUpdateDone;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (void)bindServices:(id)a0;
- (BOOL)syncToToutiaoItemIsOn;
- (void)trackLegalAffairsToastShow;
- (BOOL)shouldShowSyncToOtherAppsNotice;
- (void)hasShownSyncToOtherAppsNotice;
- (void).cxx_destruct;

@end
