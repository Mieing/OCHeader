@class IESLiveGuideModel, NSArray, NSString;
@protocol IESLiveAnchorDynamicClarityPreferenceService, IESLiveAnchorUploadBandwidthProberService, IESLiveUploadBandwidthProberDisplayViewModelDelegate;

@interface IESLiveUploadBandwidthProberDisplayViewModel : NSObject

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *currentIndexs;
@property (retain, nonatomic) NSArray *disableIndexs;
@property (retain, nonatomic) NSString *tip;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) id<IESLiveAnchorUploadBandwidthProberService> proberService;
@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (nonatomic) unsigned long long lastStatus;
@property (weak) id<IESLiveUploadBandwidthProberDisplayViewModelDelegate> delegate;

- (id)initWithGuideModel:(id)a0 diContext:(id)a1;
- (void)registerObserve;
- (void)setupDatasource;
- (void)removeObserve;
- (void).cxx_destruct;

@end
