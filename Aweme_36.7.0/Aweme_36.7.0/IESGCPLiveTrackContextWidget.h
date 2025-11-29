@class NSString;

@interface IESGCPLiveTrackContextWidget : IESGCPBaseWidget <IESGCPTrackContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideTrackContext;
- (void)widgetBindService;
- (id)getEnterSubMethodStrByPreStreamParams:(id)a0;

@end
