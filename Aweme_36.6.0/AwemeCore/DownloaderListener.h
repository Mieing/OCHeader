@interface DownloaderListener : NSObject

@property (copy) id /* block */ m_pNotifyAllCompleteFiles;
@property (copy) id /* block */ m_pNotifyAllUnfinishedFiles;
@property (copy) id /* block */ m_pNotifyMsg;
@property (copy) id /* block */ m_pNotifyPointLog;
@property (copy) id /* block */ m_pNotifyOdlLog;

- (void).cxx_destruct;

@end
