@class BDALokiModel, NSString, NSMutableDictionary, NSDate, BDALokiConfiguration;

@interface BDALokiProfile : NSObject {
    NSString *_url;
    NSMutableDictionary *_loadingData;
    NSString *_componentId;
    NSDate *_startDate;
    NSString *_errorMsg;
    long long _componentType;
    long long _useAnnieXMode;
    BOOL _hasWidthAdjustTracked;
}

@property (retain, nonatomic) NSDate *templateStartDate;
@property (retain, nonatomic) NSDate *pageStarLoadtDate;
@property (retain, nonatomic) NSDate *templateParseFinishDate;
@property (retain, nonatomic) NSDate *createComponentTreeFinishDate;
@property (weak, nonatomic) BDALokiModel *lokiModel;
@property (weak, nonatomic) BDALokiConfiguration *lokiConfig;

- (void)didFirstScreen;
- (void)showFinish;
- (id)initWithLokiModel:(id)a0 lokiConfig:(id)a1;
- (void)startFetchResource;
- (void)finishFetchResource:(id)a0;
- (void)didStartLoading;
- (void)jsRuntimeReady;
- (void)finishLoadWithUrl;
- (void)renderFail:(long long)a0 errorMsg:(id)a1;
- (void)componentWidthAdjustTrack;
- (void)sendLoadState:(id)a0 isError:(BOOL)a1;
- (int)timeIntervalSinceStartLoad;
- (void)sheoTemplateParseFinish;
- (void)sheoCreateComponentTreeFinish;
- (void).cxx_destruct;

@end
