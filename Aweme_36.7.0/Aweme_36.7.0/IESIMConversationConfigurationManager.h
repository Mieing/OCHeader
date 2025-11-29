@class NSMutableDictionary;

@interface IESIMConversationConfigurationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *multiableServices;

+ (id)sharedManager;

- (id)resolveMultiableService:(id)a0;
- (void)injectToMultiableService:(id)a0 target:(id)a1;
- (id)configurationWithConversation:(id)a0;
- (void).cxx_destruct;

@end
