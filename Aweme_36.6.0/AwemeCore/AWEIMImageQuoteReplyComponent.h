@class AWEIMEncryptedImageMessage, NSString, AWEIMEncryptedMessageViewModel;

@interface AWEIMImageQuoteReplyComponent : AWEIMImageContentComponent <AWEIMFoldMessageAssistanceButtonClickAction>

@property (retain) AWEIMEncryptedImageMessage *originMessage;
@property (retain, nonatomic) AWEIMEncryptedMessageViewModel *originMessageViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_loadDetailMessageFrom:(id)a0;
- (void)didClickAssistanceButton:(long long)a0;
- (void)didTapCoverAction;
- (id)specializedViewModel;
- (void)p_loadImageMsg:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;

@end
