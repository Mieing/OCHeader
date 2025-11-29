@class NSString, FTSIntelligentMsgItem, FTSMsgItem;

@interface MsgSearchResult : NSObject

@property (nonatomic) unsigned int m_msgSearchResultType;
@property (retain, nonatomic) FTSMsgItem *m_msgItem;
@property (retain, nonatomic) NSString *m_nsSearchText;
@property (retain, nonatomic) FTSIntelligentMsgItem *m_intelligentMsgItem;

- (void).cxx_destruct;

@end
