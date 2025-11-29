@class NSString;
@protocol AWEUGSceneInquiryService;

@interface AWEUGSceneSwitchedNotifyImpl : HTSService <AWEUGSceneSwitchedNotify>

@property (weak, nonatomic) id<AWEUGSceneInquiryService> sceneInquiryDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifySceneDidAppeared:(id)a0;
- (void)notifySceneDidDisappeared;
- (void).cxx_destruct;

@end
