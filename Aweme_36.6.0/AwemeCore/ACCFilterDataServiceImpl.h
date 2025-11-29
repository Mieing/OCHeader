@class NSString, AWEVideoPublishViewModel;

@interface ACCFilterDataServiceImpl : NSObject <ACCFilterDataService>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)publishViewModel;
- (id)createId;
- (void)setColorFilterIntensityRatio:(id)a0;
- (id)referExtra;
- (long long)recordSourceFrom;
- (id)colorFilterCacheInputRatioKey;
- (id)initWithRepository:(id)a0;
- (void).cxx_destruct;
- (long long)videoType;

@end
