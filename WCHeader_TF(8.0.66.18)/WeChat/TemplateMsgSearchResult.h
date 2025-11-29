@class NSString, CContact, ReaderMessageViewModel, UIView, FTSMsgItem;

@interface TemplateMsgSearchResult : NSObject

@property (nonatomic) unsigned long long m_msgSearchResultType;
@property (retain, nonatomic) FTSMsgItem *m_msgItem;
@property (retain, nonatomic) NSString *m_nsSearchText;
@property (retain, nonatomic) ReaderMessageViewModel *m_msgViewModel;
@property (retain, nonatomic) UIView *m_msgCellView;
@property (nonatomic) struct CGSize { double width; double height; } m_msgCellViewSize;
@property (nonatomic) BOOL m_msgCellViewSizeValid;
@property (retain, nonatomic) CContact *contact;

- (void).cxx_destruct;

@end
