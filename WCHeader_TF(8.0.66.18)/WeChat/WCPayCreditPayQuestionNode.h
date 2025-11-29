@class WCPayCreditPayQuestionStruct;

@interface WCPayCreditPayQuestionNode : NSObject

@property (nonatomic) BOOL m_bSelect;
@property (nonatomic) BOOL m_bTwoLevel;
@property (retain, nonatomic) WCPayCreditPayQuestionStruct *m_oQuestionNode;
@property (retain, nonatomic) WCPayCreditPayQuestionStruct *m_oNextQuestionNode;

- (void).cxx_destruct;

@end
