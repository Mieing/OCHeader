@protocol IReportMiniProgramDelegate;

@interface WAJSContextPlugin_reportData : WAJSContextPluginBase

@property (weak, nonatomic) id<IReportMiniProgramDelegate> webDelegate;
@property (weak, nonatomic) id<IReportMiniProgramDelegate> weappDelegate;

- (void)reportMiniProgramPageData:(id)a0 pageRoute:(id)a1 isUserReport:(BOOL)a2;
- (void)getMiniProgramReportId;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void).cxx_destruct;

@end
