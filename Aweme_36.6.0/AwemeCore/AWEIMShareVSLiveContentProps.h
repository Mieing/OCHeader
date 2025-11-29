@class AWEIMShareVSLiveMessage;

@interface AWEIMShareVSLiveContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ coverImageTapAction;
@property (copy, nonatomic) id /* block */ avatarTapAction;
@property (retain, nonatomic) AWEIMShareVSLiveMessage *message;

- (void).cxx_destruct;

@end
