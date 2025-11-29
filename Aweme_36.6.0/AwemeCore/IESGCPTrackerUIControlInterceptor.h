@interface IESGCPTrackerUIControlInterceptor : IESGCPTrackerUIViewInterceptor

- (void)startInterceptor;
- (void)stopInterceptor;
- (BOOL)couldInterceptTraceView;
- (void)hookUIControlClickEvent;
- (void)iesgcp_didTouchUpInside:(id)a0;
- (BOOL)isClickEventFromUIControl;

@end
