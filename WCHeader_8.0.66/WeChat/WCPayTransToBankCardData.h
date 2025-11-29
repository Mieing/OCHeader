@class WarningNotice, NSString, NSMutableArray, WCPayTransToBankCardReceiver;

@interface WCPayTransToBankCardData : MMObject

@property (retain, nonatomic) WCPayTransToBankCardReceiver *m_selectReceiver;
@property (nonatomic) unsigned int m_enterTimeScene;
@property (retain, nonatomic) NSString *m_nsTransferDesc;
@property (nonatomic) unsigned int m_uiTransferAmount;
@property (nonatomic) unsigned int m_uiPondage;
@property (nonatomic) unsigned int m_uiInputType;
@property (retain, nonatomic) WarningNotice *noticeItem;
@property (retain, nonatomic) NSMutableArray *m_otherReceiverHistory;
@property (retain, nonatomic) NSMutableArray *m_myReceiverHistory;

- (BOOL)isSelectFromHistory;
- (void).cxx_destruct;

@end
