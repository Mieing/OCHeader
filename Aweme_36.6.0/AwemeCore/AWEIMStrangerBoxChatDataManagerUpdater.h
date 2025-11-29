@class AWEIMStrangerBoxChatDataManagerReloadUpdater, AWEIMStrangerBoxChatDataManagerDeleteUpdater, AWEIMStrangerBoxChatDataManagerReloadAllUpdater, AWEIMStrangerBoxChatDataManagerInsertUpdater;

@interface AWEIMStrangerBoxChatDataManagerUpdater : NSObject

@property (retain) AWEIMStrangerBoxChatDataManagerInsertUpdater *inserter;
@property (retain) AWEIMStrangerBoxChatDataManagerDeleteUpdater *deleter;
@property (retain) AWEIMStrangerBoxChatDataManagerReloadUpdater *reloader;
@property (retain) AWEIMStrangerBoxChatDataManagerReloadAllUpdater *reloadAllUpdater;

- (void).cxx_destruct;
- (id)init;

@end
