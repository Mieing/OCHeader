@class NSString, NSArray;

@interface WCPayOrderProductInfo : NSObject

@property (retain, nonatomic) NSString *m_nsProductId;
@property (retain, nonatomic) NSString *m_nsProductName;
@property (retain, nonatomic) NSString *m_nsProductImage;
@property (nonatomic) unsigned int m_uiProductCount;
@property (retain, nonatomic) NSString *m_nsProductMoney;
@property (retain, nonatomic) NSArray *m_arrSKUInfo;
@property (retain, nonatomic) NSString *m_nsJumpUrl;
@property (nonatomic) unsigned int m_uiJumpType;

- (void).cxx_destruct;

@end
