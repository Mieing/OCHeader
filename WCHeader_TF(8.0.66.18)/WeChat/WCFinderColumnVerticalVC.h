@class NSString;

@interface WCFinderColumnVerticalVC : WCFinderFeedListViewController <WCFinderFeedListTransitionVerticalGestureBehavior>

@property (nonatomic) long long enterFocusIdnex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configVerticalScrollToMinimize;
- (double)bottomOffset;
- (id)currentFocusContentVMWithIsInitiator:(BOOL)a0;

@end
