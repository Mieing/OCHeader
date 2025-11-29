@class FinderSyncDecorationInfoResp, MMTimer, MMLiveStorageCleanupPinningToken, MMLiveResourceFetcherLegacyApiAdapter, NSString;

@interface MMFinderLiveAnniversaryDecorationViewModel : NSObject

@property (retain, nonatomic) FinderSyncDecorationInfoResp *resp;
@property (retain, nonatomic) MMLiveResourceFetcherLegacyApiAdapter *downloadManager;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) long long defaultVerifyTime;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken;
@property (retain, nonatomic) NSString *atmosphereLotAnimationViewUrl;
@property (retain, nonatomic) NSString *avatarLotAnimationViewUrl;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) BOOL shouldHideHeaderDecorationView;
@property (nonatomic) BOOL shouldHideAtmosphereDecorationView;
@property (nonatomic) BOOL shouldPlayAtmosphereDecorationView;

- (id)init;
- (void)setup;
- (void)updateModel:(id)a0;
- (void)setupData;
- (void)triggerTimer;
- (void)playAtmosphereAnimationEnd;
- (id)downloadUrlFrom:(id)a0;
- (id)md5From:(id)a0;
- (void).cxx_destruct;

@end
