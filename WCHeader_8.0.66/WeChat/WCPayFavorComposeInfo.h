@class NSString, NSArray;

@interface WCPayFavorComposeInfo : NSObject

@property (nonatomic) unsigned long long m_uiTotalFavorAmount;
@property (retain, nonatomic) NSString *m_nFavorComposeid;
@property (nonatomic) unsigned long long m_uiAfterFavorTradeAmount;
@property (retain, nonatomic) NSArray *m_arrFavItemList;
@property (nonatomic) unsigned long long m_uiShowFavorAmount;
@property (nonatomic) unsigned long long m_uiInvariableFavorAmount;
@property (nonatomic) BOOL m_bIsVariableFavor;
@property (retain, nonatomic) NSString *m_nsInvariableFavorDesc;
@property (retain, nonatomic) NSString *m_nsVariableFavorDesc;

- (void).cxx_destruct;

@end
