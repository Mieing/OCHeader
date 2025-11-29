@class NSDictionary, NSMutableArray;

@interface AWEIMStrangerBoxChatDataManagerReloadAllUpdater : NSObject

@property (retain) NSMutableArray *reloadAllCommonChatArray;
@property (retain) NSMutableArray *reloadAllOlderChatArray;
@property (retain) NSMutableArray *reloadAllTrashChatArray;
@property (copy) NSDictionary *extDic;
@property unsigned long long scene;
@property BOOL shouldMergeUpdater;

- (void).cxx_destruct;
- (id)init;

@end
