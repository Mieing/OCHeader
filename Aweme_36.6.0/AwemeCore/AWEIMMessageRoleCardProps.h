@class AWEIMMessage;

@interface AWEIMMessageRoleCardProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL followFloatViewDisplaying;
@property (copy, nonatomic) id /* block */ tapAvatarActionBlock;
@property (copy, nonatomic) id /* block */ followActionBlock;
@property (copy, nonatomic) id /* block */ tapIdentityIconActionBlock;
@property (copy, nonatomic) id /* block */ tapExpandContentActionBlock;
@property (copy, nonatomic) id /* block */ layoutSubviewsBlock;

- (void).cxx_destruct;

@end
