@class AWEFeedSearchAIGCSearchBarContext, NSString, AWESearchAIGCImageUploadManager, UIImageView, NSDate, AWEFeedSearchAIGCGuessSearchContainer, AWEFeedSearchAIGCSearchBar;

@interface AWEFeedSearchAIGCSearchBarController : UIViewController <AWEFeedSearchAIGuessSearchContainerDelegate>

@property (retain, nonatomic) AWEFeedSearchAIGCSearchBarContext *context;
@property (retain, nonatomic) AWEFeedSearchAIGCSearchBar *searchBar;
@property (nonatomic) double searchBarBottomOffset;
@property (retain, nonatomic) AWEFeedSearchAIGCGuessSearchContainer *guessSearchContainer;
@property (retain, nonatomic) AWESearchAIGCImageUploadManager *imageUploadManager;
@property (retain, nonatomic) UIImageView *voiceBackgroundImageView;
@property (retain, nonatomic) NSDate *pageStart;
@property (nonatomic) BOOL isSendQueryEndKeyboardInput;
@property (copy, nonatomic) NSString *logId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPageShow;
- (id)commonTrackParams;
- (void)bindActions;
- (void)guessSearchContainerWillDisplayItemAt:(unsigned long long)a0 model:(id)a1;
- (void)guessSearchContainerDidTapItemAt:(unsigned long long)a0 item:(id)a1 model:(id)a2;
- (void)requestGuessSearchWord;
- (void)trackPageStay;
- (void)sendQueryWithQuery:(id)a0 extraParams:(id)a1;
- (void)handleGuessSearchModel:(id)a0;
- (void)uploadCurrentFeedVideoFrame;
- (void)trackGuessSearchShowWithShadingWordCount:(long long)a0;
- (void)uploadFeedPauseFrameURI:(id)a0;
- (void)trackGuessSearchItemOnClickAtIndex:(long long)a0 content:(id)a1 hasPic:(BOOL)a2;
- (void)trackGuessSearchItemShowAtIndex:(long long)a0 content:(id)a1 hasPic:(BOOL)a2;
- (id)guessSearchCommonTrackParams;
- (void)close;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)initWithContext:(id)a0;
- (void)applicationDidEnterBackground;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateSubviews;

@end
