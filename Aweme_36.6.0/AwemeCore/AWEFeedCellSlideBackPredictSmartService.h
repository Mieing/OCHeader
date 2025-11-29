@class NSString;

@interface AWEFeedCellSlideBackPredictSmartService : AWEBaseSmartServiceImpl <AWEFeedCellSlideBackPredictSmartService>

@property (nonatomic) BOOL isTrackOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;
- (void)trackIsSlideBack:(BOOL)a0 currentAweme:(id)a1;

@end
