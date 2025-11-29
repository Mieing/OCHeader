@class NSString, NSMutableArray, NSArray;

@interface WCRedEnvelopesHistoryInfo : NSObject

@property (nonatomic) long long m_lRecTotalNum;
@property (nonatomic) long long m_lRecTotalAmount;
@property (nonatomic) long long m_lSendTotalNum;
@property (nonatomic) long long m_lSendTotalAmount;
@property (nonatomic) long long m_lTotalGameCount;
@property (retain, nonatomic) NSMutableArray *m_arrRecList;
@property (retain, nonatomic) NSMutableArray *m_arrSendList;
@property (nonatomic) BOOL m_bHasMoreValue;
@property (retain, nonatomic) NSString *m_nsCurrentYear;
@property (retain, nonatomic) NSArray *m_arrAllowSelectYear;
@property (retain, nonatomic) NSString *m_nsHeaderImageClickedUrl;
@property (retain, nonatomic) NSString *m_nsProcessContent;

- (void).cxx_destruct;

@end
