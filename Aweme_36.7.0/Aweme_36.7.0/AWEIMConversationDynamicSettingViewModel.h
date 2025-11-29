@class NSArray;

@interface AWEIMConversationDynamicSettingViewModel : NSObject

@property (copy, nonatomic) NSArray *conversationSettingModels;

- (id)handleConversationDynamicSettingFromArray:(id)a0;
- (id)handleConversationDynamicSettingFromCache:(id)a0;
- (id)handleConversationDynamicSettingFromServerResponse:(id)a0;
- (void).cxx_destruct;

@end
