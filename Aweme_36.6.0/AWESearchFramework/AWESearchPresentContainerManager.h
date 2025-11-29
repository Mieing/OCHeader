@class NSPointerArray;

@interface AWESearchPresentContainerManager : NSObject

@property (nonatomic) BOOL isShowingPresentContainer;
@property (retain, nonatomic) NSPointerArray *presentViewControllers;

+ (id)sharedInstance;

- (BOOL)isSearchPresentContainerTopOfViewAndPreventPlayFeedVideo;
- (void)registerPresentView:(id)a0;
- (void)unregisterPresentView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
