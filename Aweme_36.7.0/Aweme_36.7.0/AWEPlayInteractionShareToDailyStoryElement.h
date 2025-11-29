@class AWEButton, NSString;

@interface AWEPlayInteractionShareToDailyStoryElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEButton *shareButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldMusicInfoActiveWithData:(id)a0 context:(id)a1;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)showShareButtonIfNeeded;
- (void)trackShareWithEventType:(id)a0;
- (BOOL)shouldShowShareToDailyStoryButton;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didTapShare:(id)a0;

@end
