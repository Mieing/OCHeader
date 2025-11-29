@class NSString;

@interface WCPayCheckPayPwdByTokenResponse : NSObject

@property (retain, nonatomic) NSString *m_nsCheckPwdToken;
@property (nonatomic) BOOL m_bIsFreeSMS;
@property (retain, nonatomic) NSString *m_nsMobileNo;
@property (retain, nonatomic) NSString *m_nsRelationKey;

- (void).cxx_destruct;

@end
