@class NSString, NSNumber;

@interface AWEModelLayerShowNetworkProvider.CodeGendouyinContentPayMidBreakStrategyNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ seriesId;
    void /* function */ clientSideParams;
    void /* function */ serverSideParams;
    void /* function */ seriesExtraParams;
    void /* function */ playletScene;
    void /* function */ clientExtraParams;
}

@property (nonatomic, copy) NSString *seriesId;
@property (nonatomic, retain) NSNumber *productId;
@property (nonatomic, retain) NSNumber *seriesIdx;
@property (nonatomic, retain) NSNumber *finishVideoDuration;
@property (nonatomic, retain) NSNumber *videoDuration;
@property (nonatomic, copy) NSString *clientSideParams;
@property (nonatomic, copy) NSString *serverSideParams;
@property (nonatomic, retain) NSNumber *totalEpisode;
@property (nonatomic, retain) NSNumber *scene;
@property (nonatomic, copy) NSString *seriesExtraParams;
@property (nonatomic, copy) NSString *playletScene;
@property (nonatomic, copy) NSString *clientExtraParams;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
