@class DUXBottomNotification, NSString, AWEPublishAssistantResponse;

@interface AWEPostPageAssistantElement : AWEPostPageElement

@property (retain, nonatomic) AWEPublishAssistantResponse *resultResponse;
@property (retain, nonatomic) DUXBottomNotification *hintView;
@property (copy, nonatomic) NSString *zipUri;
@property (nonatomic) long long hintDismissTrackType;
@property (nonatomic) BOOL isPublisherTopView;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)dismissHint;
- (id)trackParams:(id)a0;
- (void)showHintIfNeeded;
- (void)reviewPostContent:(id)a0;
- (BOOL)isUriReviewed:(id)a0;
- (void)uriDidReview:(id)a0;
- (void)didReceiveReviewResponse;
- (void)setupHintView;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
