@class AWEDetailThemeViewModel, NSString;

@interface AWEDetailThemeTracker : NSObject <AWEDetailTrackerService>

@property (retain, nonatomic) AWEDetailThemeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStateContext:(id)a0;
- (void)trackDetailPageShootClickWithTopicName:(id)a0 isHalf:(BOOL)a1 isInner:(BOOL)a2;
- (void)trackEnterMVDetailWithTopicName:(id)a0 isHalf:(BOOL)a1;
- (void)trackEnterDetailFeedWithTopicName:(id)a0 isHalf:(BOOL)a1;
- (void).cxx_destruct;

@end
