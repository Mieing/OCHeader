@class NSString, NSArray;

@interface WCPayNoticeInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiNoticeID;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsHeadTips;
@property (retain, nonatomic) NSArray *m_arrContent;
@property (retain, nonatomic) NSString *m_nsFootTip;
@property (nonatomic) unsigned long long m_uiAmountCount;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
