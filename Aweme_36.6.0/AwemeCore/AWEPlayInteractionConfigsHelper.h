@class AWEPlayInteractionViewController, NSString, NSDictionary, AWEAwemeModel, AWEPlayInteractionMetricsMonitor;

@interface AWEPlayInteractionConfigsHelper : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (retain, nonatomic) id commerceController;
@property (weak, nonatomic) AWEPlayInteractionMetricsMonitor *metricsMonitor;
@property (weak, nonatomic) AWEPlayInteractionViewController *viewController;

- (BOOL)isRemotePlayLegacyVersion;
- (BOOL)isDouDiscountInnerPage;
- (BOOL)shouldShowBulletScreen;
- (BOOL)shouldAddNowFamiliarInterpretationElementsWithBulletsScreen;
- (BOOL)isDouDiscountInnerPageWithV2Experiment;
- (BOOL)notSmallDevice;
- (BOOL)isNearbyWaterFall;
- (BOOL)shouldShowRelatedBarElement;
- (BOOL)isInTeenExternalAlbum;
- (void).cxx_destruct;

@end
