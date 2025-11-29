@class NSString, IESGCPBetaDownloadAPI;

@interface IESGCPDetailBetaDownloadButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel

@property (copy, nonatomic) NSString *openSchema;
@property (nonatomic) BOOL isSupportIOS;
@property (copy, nonatomic) NSString *downloadInfo;
@property (nonatomic) unsigned long long gamePlatform;
@property (copy, nonatomic) NSString *planID;
@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) long long planType;
@property (nonatomic) BOOL autoOpenTestGameDownloadPage;
@property (retain, nonatomic) IESGCPBetaDownloadAPI *api;
@property (nonatomic) BOOL isQualified;

- (void)updateContentData:(id)a0;
- (void)testGameDownloadButtonDidClick:(double)a0 requestCallback:(id /* block */)a1;
- (void)parseButtonStyle;
- (void)handleButtonClickEventIfNeedCheckLogin:(BOOL)a0 requestCallback:(id /* block */)a1;
- (void)handleButtonClickEventWithCallback:(id /* block */)a0;
- (void)openLynxSchemaFromNodeDataWithExtraParams:(id)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)buttonStyle;

@end
