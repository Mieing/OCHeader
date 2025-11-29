@class AWEButton, NSString;

@interface AWEPlayInteractionOriginalAwemeCommentElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEButton *originalAwemeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)originalAwemeButtonClick:(id)a0;
- (BOOL)shouldShowOriginalAwemeCommentBottomButton;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)shouldShow;

@end
