@class AWEIMChatModel, NSDictionary;

@interface AWEIMStrangerBoxChatDataManagerInsertUpdater : NSObject

@property (retain) AWEIMChatModel *chatModel;
@property long long index;
@property unsigned long long scene;
@property (copy) NSDictionary *ext;
@property BOOL isTrash;

- (void).cxx_destruct;
- (id)init;

@end
