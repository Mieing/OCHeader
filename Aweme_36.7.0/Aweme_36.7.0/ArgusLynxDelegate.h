@class BDXBridgeMethodControlManager, ArgusLynxPageInfo, ArgusReportConfig;
@protocol ArgusLynxBizServiceProtocol;

@interface ArgusLynxDelegate : ArgusBaseDelegate

@property (retain, nonatomic) ArgusLynxPageInfo *mainPageInfo;
@property (retain, nonatomic) BDXBridgeMethodControlManager *jsbCallVerifier;
@property (retain, nonatomic) ArgusReportConfig *reportConfig;
@property (retain, nonatomic) id<ArgusLynxBizServiceProtocol> bizService;

+ (void)uploadSignFailedLynxFile:(id)a0 category:(id)a1;

- (id)setupStrategyEngine;
- (id)setupPageInfo:(id)a0;
- (void)loadTemplateVerifyComplete:(id)a0 context:(id)a1;
- (void)setupJSBCallVerifier:(BOOL)a0 pageInfo:(id)a1;
- (id)mainPageFeId;
- (id)mainPageVerifyUrl;
- (void)monitorLoadTemplate:(id)a0 resourceInfo:(id)a1;
- (id)verifyLoadTemplate:(id)a0;
- (void).cxx_destruct;

@end
