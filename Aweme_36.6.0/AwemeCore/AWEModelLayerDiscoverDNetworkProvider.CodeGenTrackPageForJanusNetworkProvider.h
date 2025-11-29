@class NSString, NSNumber;

@interface AWEModelLayerDiscoverDNetworkProvider.CodeGenTrackPageForJanusNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ track;
    void /* function */ desc;
}

@property (nonatomic, copy) NSString *track;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, retain) NSNumber *trackId;
@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *lastTimeStamp;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
