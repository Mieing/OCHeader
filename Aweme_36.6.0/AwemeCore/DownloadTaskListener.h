@interface DownloadTaskListener : NSObject

@property (copy) id /* block */ m_pNotifyTaskProgress;
@property (copy) id /* block */ m_pNotifyData;
@property (copy) id /* block */ m_pNotifyTaskComplete;
@property (copy) id /* block */ m_pNotifyTaskError;
@property (copy) id /* block */ m_pNotifyTaskMsg;

- (void).cxx_destruct;

@end
