@class NSString, NSNumber;

@interface AWEModelLayerShowNetworkProvider.CodeGenV1SeriesReCreationWatchRecordNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ reCreationItemId;
}

@property (nonatomic, copy) NSString *reCreationItemId;
@property (nonatomic, retain) NSNumber *watchedProgress;
@property (nonatomic, retain) NSNumber *tagId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
