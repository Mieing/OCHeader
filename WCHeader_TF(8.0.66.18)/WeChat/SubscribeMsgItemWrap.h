@class SubscribeMsgItem;

@interface SubscribeMsgItemWrap : MMObject

@property (retain, nonatomic) SubscribeMsgItem *msgItem;
@property (nonatomic) BOOL isHandling;

- (void).cxx_destruct;

@end
