@class AWELiveCrossPlatformAfterLiveAudienceRtsHandler, NSString;

@interface AWELiveCrossPlatformAfterLiveAudienceServiceImpl : NSObject <IESLiveCrossPlatformAfterLiveAudienceService>

@property (retain, nonatomic) AWELiveCrossPlatformAfterLiveAudienceRtsHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (id)relaxComponentInit;
- (void)updateWithCountTime:(long long)a0;
- (void)updateWithInitState:(id)a0 params:(id)a1 room:(id)a2 performanceLogger:(id)a3 closeVCBlock:(id /* block */)a4;
- (void)updateWithRoom:(id)a0;
- (void)userServiceLog:(id)a0 user:(id)a1 room:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
