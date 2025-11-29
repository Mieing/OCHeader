@class NSString, NSNumber;

@interface WCPayLoanEntryInfo : NSObject <NSCoding>

@property (nonatomic) BOOL m_isShowEntry;
@property (nonatomic) unsigned int m_index;
@property (retain, nonatomic) NSString *m_loanJumpUrl;
@property (retain, nonatomic) NSString *m_title;
@property (retain, nonatomic) NSString *m_tips;
@property (retain, nonatomic) NSNumber *m_availableOtb;
@property (retain, nonatomic) NSNumber *m_isOverdue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
