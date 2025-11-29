@class NSMutableSet;

@interface AWEUserWorkActionController : AWEUserWorkChangeController

@property (retain, nonatomic) NSMutableSet *removedAwemeIDSetForGuidance;

- (void)containerViewWillDisappear:(BOOL)a0;
- (void)handleVideoFavoriteNotification:(id)a0;
- (void)handleVideoFavoriteBatchCancelNotification:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
