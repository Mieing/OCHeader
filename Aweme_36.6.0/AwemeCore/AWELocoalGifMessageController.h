@class NSArray, AWEIMMessageViewModel, AWEIMMessageBaseViewController;

@interface AWELocoalGifMessageController : NSObject

@property (retain, nonatomic) NSArray *messageGroupArray;
@property (retain, nonatomic) AWEIMMessageViewModel *lastGreetingMessageVM;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL hasTryFiltered;
@property (nonatomic) BOOL hasTryAddLocoal;
@property (nonatomic) BOOL didAddLocoal;
@property (retain, nonatomic) NSArray *gifCreaters;
@property (weak, nonatomic) AWEIMMessageBaseViewController *vcParent;

- (void)filterGreetingGifInGroup:(id)a0 completion:(id /* block */)a1;
- (void)tryAddLocoalGifFor:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_canFilerGreetingMessage;
- (void)p_returnBackGreetingMessage;
- (void).cxx_destruct;

@end
