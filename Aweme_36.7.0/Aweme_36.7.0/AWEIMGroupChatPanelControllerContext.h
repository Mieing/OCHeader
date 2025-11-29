@class NSDictionary;
@protocol AWEIMGroupChatPanelControllerDelegate;

@interface AWEIMGroupChatPanelControllerContext : NSObject

@property (copy, nonatomic) id /* block */ send;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackDict;

- (void).cxx_destruct;

@end
