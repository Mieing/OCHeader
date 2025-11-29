@class AWEECOMIMChatListClickResultConfig, AWEECOMIMChatDetailClickResultConfig;

@interface AWEECOMIMClickResultConfig : NSObject

@property (readonly, nonatomic) AWEECOMIMChatListClickResultConfig *chatListConfig;
@property (readonly, nonatomic) AWEECOMIMChatDetailClickResultConfig *chatDetailConfig;

+ (id)sharedConfig;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
