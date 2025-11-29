@class NSString;

@interface IESLiveAioLinkFullLinkImpl : NSObject <IESLiveAioLinkFullLink>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendFullLinkMonitorWithTraceEvent:(id)a0;

@end
