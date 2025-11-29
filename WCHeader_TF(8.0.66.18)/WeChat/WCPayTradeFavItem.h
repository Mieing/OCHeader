@class NSString, NSArray;

@interface WCPayTradeFavItem : NSObject

@property (nonatomic) unsigned int m_uiFavType;
@property (nonatomic) unsigned int m_uiFavSubType;
@property (nonatomic) unsigned long long m_uiFavProperty;
@property (retain, nonatomic) NSString *m_nsFavorTypeDesc;
@property (retain, nonatomic) NSString *m_nsFavID;
@property (retain, nonatomic) NSString *m_nsFavName;
@property (retain, nonatomic) NSString *m_nsFavDesc;
@property (retain, nonatomic) NSString *m_nsFavUsedManual;
@property (retain, nonatomic) NSString *m_nsFavUsedRemark;
@property (nonatomic) BOOL m_bBankFav;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsBankName;
@property (retain, nonatomic) NSString *m_nsBankLogoUrl;
@property (nonatomic) int m_enCurrentItemStatus;
@property (retain, nonatomic) NSArray *bind_serial_list;

- (void).cxx_destruct;

@end
