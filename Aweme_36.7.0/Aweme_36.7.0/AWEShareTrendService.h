@class NSString;

@interface AWEShareTrendService : AWEShareCommonImpl <AWEShareTrend>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithTrend:(id)a0 extraLogInfo:(id)a1 onViewController:(id)a2;
- (id)contextWithTrendInfo:(id)a0;
- (id)statsShareTrendStage;

@end
