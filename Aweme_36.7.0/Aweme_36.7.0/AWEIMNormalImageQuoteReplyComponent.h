@class AWEIMNormalImageMessageViewModel, AWEIMImageMessage, NSString;

@interface AWEIMNormalImageQuoteReplyComponent : AWEIMNormalImageContentComponent <AWEIMFoldMessageAssistanceButtonClickAction>

@property (retain, nonatomic) AWEIMImageMessage *originMessage;
@property (retain, nonatomic) AWEIMNormalImageMessageViewModel *originMessageViewModel;
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
- (void).cxx_destruct;
- (id)displayMessage;

@end
