@class NSMutableSet;

@interface AWEUserWorkActionControllerNew : AWEUserWorkChangeControllerNew

@property (retain, nonatomic) NSMutableSet *removedAwemeIDSetForGuidance;

- (void)containerViewWillDisappear:(BOOL)a0;
- (void)handleVideoFavoriteNotification:(id)a0;
- (void)handleVideoFavoriteBatchCancelNotification:(id)a0;
- (id)batchModifyService;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
