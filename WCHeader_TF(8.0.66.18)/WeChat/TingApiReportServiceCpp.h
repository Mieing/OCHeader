@class NSString;

@interface TingApiReportServiceCpp : UnitRCObjcBaseProxyClass <TingApiReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExploreSessionsContext:(id)a0;
- (void)clearExploreSessionsContext:(int)a0;
- (id)getExploreSessionsContext;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (BOOL)appBackgroundState;
- (void)setAppEnterInfo:(id)a0 enterScene:(int)a1;
- (void)markPlayAppManualStop;

@end
