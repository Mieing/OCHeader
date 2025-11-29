@class NSPointerArray, NSString;

@interface AWEDetailPresentContainerManager : NSObject <AWEDetailPresentContainerManagerProtocol>

@property (nonatomic) BOOL isShowingPresentContainer;
@property (retain, nonatomic) NSPointerArray *presentViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isDetailPresentContainerTopOfViewAndPreventPlayFeedVideo;
- (void)registerPresentView:(id)a0;
- (void)unregisterPresentView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
