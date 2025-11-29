@interface AWEIMTaskCardRequest : NSObject

+ (void)requestTaskCardEntranceComplete:(id /* block */)a0;
+ (id)requestTaskCardListDetailParam:(id)a0 onComplete:(id /* block */)a1;
+ (void)requestDeleteTaskConversationParam:(id)a0 onComplete:(id /* block */)a1;
+ (void)setTaskPlatformMuteStateParam:(id)a0 onComplete:(id /* block */)a1;

@end
