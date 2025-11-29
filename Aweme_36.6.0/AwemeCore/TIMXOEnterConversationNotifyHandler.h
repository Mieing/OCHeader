@class NSString;
@protocol TIMXOEnterConversationObserverDelegate;

@interface TIMXOEnterConversationNotifyHandler : NSObject <TIMXConversationApplyNotifyProtocol>

@property (weak, nonatomic) id<TIMXOEnterConversationObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServerPushedNewApply:(id)a0 type:(int)a1;
- (void).cxx_destruct;

@end
