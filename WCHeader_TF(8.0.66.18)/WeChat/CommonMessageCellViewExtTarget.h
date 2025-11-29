@protocol CommonMessageCellViewExtTargetDelegate;

@interface CommonMessageCellViewExtTarget : NSObject <ChatBackgroundExt>

@property (weak, nonatomic) id<CommonMessageCellViewExtTargetDelegate> delegate;

- (void)registerExtension;
- (void)unregisterExtension;
- (void)onChatBackgroundChanged:(id)a0;
- (void).cxx_destruct;

@end
