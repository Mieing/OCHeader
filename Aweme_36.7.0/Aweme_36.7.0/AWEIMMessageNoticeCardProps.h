@class AWEIMMessage;

@interface AWEIMMessageNoticeCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) AWEIMMessage *message;

- (void).cxx_destruct;

@end
