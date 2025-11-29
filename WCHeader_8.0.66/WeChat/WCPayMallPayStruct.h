@class NSString, NSMutableDictionary;

@interface WCPayMallPayStruct : NSObject

@property (retain, nonatomic) NSString *m_nsPayFuncId;
@property (retain, nonatomic) NSString *m_nsPayProductId;
@property (retain, nonatomic) NSString *m_nsPayAppId;
@property (retain, nonatomic) NSMutableDictionary *m_dicRemarks;
@property (retain, nonatomic) NSString *m_nsTecket;

- (void).cxx_destruct;

@end
