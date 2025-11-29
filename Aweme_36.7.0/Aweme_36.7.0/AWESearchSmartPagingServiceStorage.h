@interface AWESearchSmartPagingServiceStorage : NSObject

@property (copy) id featureCacheInfo;
@property double updateTimestamp;

- (void)resetUpdateTimeStamp;
- (void)storeFeatureInfo:(id)a0;
- (id)fetchFeatureInfo;
- (void).cxx_destruct;

@end
