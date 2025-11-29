@protocol AWEDCFeedTidyModelOuterDataControllerProtocol;

@interface AWEDCFeedTidyAwemeConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enableTidyAweme;
@property (nonatomic) BOOL enableTidyAwemeOpt;
@property (nonatomic) BOOL enableNewTidyAwemeDetailOpt;
@property (nonatomic) BOOL optChunkCoverPreload;
@property (nonatomic) BOOL optHeightCalculate;
@property (weak, nonatomic) id<AWEDCFeedTidyModelOuterDataControllerProtocol> outerTidyModelDataController;
@property (nonatomic) BOOL useChunk;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
