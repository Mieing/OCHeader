@class IESLiveInteractiveQuickStartAPI, IESLiveAudienceInteractPermissionChecker, NSString, HTSLiveRoom;

@interface IESLiveInteractiveQuickStartService : NSObject <IESLiveInteractiveQuickStartServiceProtocol>

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) IESLiveInteractiveQuickStartAPI *api;
@property (retain, nonatomic) IESLiveAudienceInteractPermissionChecker *permissionChecker;
@property (copy, nonatomic) id /* block */ monitorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateWithRoom:(id)a0;
- (void)quickStartMultiAudioWithScene:(long long)a0 requestSource:(long long)a1 extraParam:(id)a2 completion:(id /* block */)a3;
- (void)monitorWithAPIPath:(id)a0 requestTime:(double)a1 response:(id)a2 error:(id)a3 extra:(id)a4;
- (void)quickStartMultiAudioWithScene:(long long)a0 layout:(id)a1 requestSource:(long long)a2 extraParam:(id)a3 completion:(id /* block */)a4;
- (void)traceWithName:(id)a0 step:(id)a1 extra:(id)a2;
- (void)dealWithInitResponse:(id)a0 error:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (BOOL)isValidResponse:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
