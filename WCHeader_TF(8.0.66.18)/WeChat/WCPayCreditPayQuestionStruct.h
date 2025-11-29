@class NSString;

@interface WCPayCreditPayQuestionStruct : NSObject

@property (nonatomic) BOOL m_bSelect;
@property (nonatomic) BOOL m_bTwoLevel;
@property (nonatomic) unsigned int m_uiSelected;
@property (retain, nonatomic) NSString *m_nsParentID;
@property (retain, nonatomic) NSString *m_nsQuestionID;
@property (retain, nonatomic) NSString *m_nsQuestion;
@property (retain, nonatomic) NSString *m_nsAnswer;
@property (retain, nonatomic) NSString *m_nsTips;
@property (nonatomic) unsigned int m_uiMaxLength;
@property (nonatomic) BOOL m_bUsed;

- (void).cxx_destruct;

@end
