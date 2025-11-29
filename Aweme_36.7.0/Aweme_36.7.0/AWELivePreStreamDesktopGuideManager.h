@class NSString, AWEAwemeModel;

@interface AWELivePreStreamDesktopGuideManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (BOOL)isFollow;
- (BOOL)isLiveTab;
- (id)createRequestModel;
- (void)canShowDesktopGuideWithSceneName:(id)a0 completion:(id /* block */)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
