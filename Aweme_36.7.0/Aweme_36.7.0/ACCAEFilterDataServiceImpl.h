@class NSString, NSDictionary, DVETrackPanelContext, AWEVideoPublishViewModel;

@interface ACCAEFilterDataServiceImpl : NSObject <ACCFilterDataService>

@property (weak, nonatomic) DVETrackPanelContext *context;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)enterFrom;
- (id)createId;
- (void)setColorFilterIntensityRatio:(id)a0;
- (id)referExtra;
- (long long)recordSourceFrom;
- (id)colorFilterCacheInputRatioKey;
- (id)initWithContext:(id)a0 publishViewModel:(id)a1;
- (void).cxx_destruct;
- (long long)videoType;

@end
