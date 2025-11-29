@class NSString;

@interface AWEPlayletTabGuideTrackManager : NSObject <AWEPlayletTabGuideTrackManagerProtocol>

@property (copy, nonatomic) NSString *playletTabPageOpenway;
@property (copy, nonatomic) NSString *playletCenterPageOpenway;
@property (copy, nonatomic) NSString *currentPageName;
@property (copy, nonatomic) NSString *playletWidgetInstallName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)playletCenterGuideParams;
- (void)updatePlayletCenterPageOpenway:(id)a0;
- (void)updatePlayletPageName:(id)a0;
- (void)updatePlayletWidgetInstallName:(id)a0;
- (void)updatePlayletTabPageOpenway:(id)a0;
- (id)playletTabPageGuideParams;
- (id)playletCenterPageGuideParams;
- (BOOL)isFromPlayletCenterPage;
- (void).cxx_destruct;

@end
