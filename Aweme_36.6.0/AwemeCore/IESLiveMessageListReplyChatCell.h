@class IESLiveMessageLabel, UIView;

@interface IESLiveMessageListReplyChatCell : IESLiveMessageListBaseCell

@property (retain, nonatomic) UIView *messagesContainer;
@property (retain, nonatomic) IESLiveMessageLabel *repliedContentLabel;
@property (retain, nonatomic) UIView *replyTagView;

- (void)refreshWith:(id)a0;
- (BOOL)needLoadMessageTextLabel;
- (BOOL)onlyUseMessageTextLabel;
- (void).cxx_destruct;
- (void)setupView;

@end
