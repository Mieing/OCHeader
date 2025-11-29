@class NSDictionary, AWEIMMessageConversation;

@interface AWEIMMessageConversationKVCacheViewModel : NSObject

@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (copy) NSDictionary *kVCache;
@property BOOL preparedFromDisk;

- (void)updateWithKey:(id)a0 value:(id)a1 overwrite:(BOOL)a2 persistent:(BOOL)a3;
- (void)asyncGetValueWithKey:(id)a0 completion:(id /* block */)a1;
- (void)__prepareDataFromDiskWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
