@class NSString, AWEVideoPublishViewModel;
@protocol ACCSelectTemplateServiceProtocol, IESServiceProvider, ACCElementBindService, ACCEditorOneClickFilmService;

@interface ACCEditElementBindServiceImpl : NSObject <ACCEditElementBindService>

@property (weak, nonatomic) id<ACCElementBindService> elementBindService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSelectTemplateServiceProtocol> selectTemplateService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (void)editComponentDidAppear;
- (BOOL)elementSourceApplying:(id)a0;
- (void)handleElementBind:(long long)a0 sourceId:(id)a1;
- (void)handleElementBind:(long long)a0 sourceId:(id)a1 requestFrom:(long long)a2;
- (id)initWithServiceProvider:(id)a0 repoContainer:(id)a1;
- (void)fetchElementBindIfNeeded;
- (BOOL)shouldFetchBindElementFollowShoot:(long long)a0;
- (id)followShootElementArray;
- (void).cxx_destruct;

@end
