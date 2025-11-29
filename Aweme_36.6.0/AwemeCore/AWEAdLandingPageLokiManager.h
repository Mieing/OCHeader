@class NSString, NSDictionary, AWEAwemeModel, AWEBDALokiManager;

@interface AWEAdLandingPageLokiManager : NSObject <BDALokiManagerDelegate, AWEAdLandingPageLokiManager> {
    NSDictionary *_globalProps;
}

@property (retain, nonatomic) AWEBDALokiManager *adLokiManager;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (id)configLokiData:(id)a0;
- (void)lokiStartLoad:(id)a0;
- (void)lokiComponentDowngrade:(id)a0 errorMsg:(id)a1;
- (void)lokiRenderFinishComponent:(id)a0;
- (void)lokiClose:(id)a0;
- (id)getLynxGlobalProps:(id)a0;
- (void)setupLokiWithAweme:(id)a0 globalProps:(id)a1 container:(id)a2 url:(id)a3;
- (void).cxx_destruct;
- (void)reset;

@end
