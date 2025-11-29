@class NSString;

@interface IESLiveLinkInteractStreamingClientImp_Douyin : NSObject <IESLiveInteractStreamingClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseRTCEngine;
- (void)preCreateRTCEngine:(id)a0 linkerSessionId:(id)a1;
- (id)generateAbTestConfig:(id)a0;

@end
