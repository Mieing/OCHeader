@class NSString, NSMutableArray, AWEUITextLoadingView;

@interface AWECommentMediaFeedIndicatorComponent : AWEBaseController <AWECommentMediaFeedComponentProtocol>

@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unRegisterObserver;
- (void)registerObserver;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
