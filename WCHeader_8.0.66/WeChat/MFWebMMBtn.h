@class NSString;

@interface MFWebMMBtn : MFBannerBtn <IOnlineClientMgrExt>

@property (nonatomic) int status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initStatus;
- (void)uninitStatus;
- (id)GetOnlineSummaryWording;
- (void)updateWithOnlineStatus;
- (void)updateDeviceIcon;
- (void)onOnlineInfoUpdated;
- (void)dealloc;
- (void)cleanStatus;

@end
