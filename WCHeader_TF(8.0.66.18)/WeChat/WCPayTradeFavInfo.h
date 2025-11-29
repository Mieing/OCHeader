@class NSString, NSArray, WCPayFavorComposeInfo, BankFavGuideForBindCard, WCPayBankCardFavorInfo, NSDictionary;

@interface WCPayTradeFavInfo : NSObject {
    NSDictionary *m_dicItemSelectStatus;
}

@property (nonatomic) unsigned long long m_uiTrandeAmount;
@property (nonatomic) unsigned long long m_uiTotalFavAmount;
@property (nonatomic) unsigned long long m_uiAfterFavorTradeAmount;
@property (retain, nonatomic) NSString *m_nsFavorCompseid;
@property (retain, nonatomic) NSArray *m_arrTradeFavItemList;
@property (retain, nonatomic) NSArray *m_arrWCPayFavorComposeInfo;
@property (retain, nonatomic) WCPayFavorComposeInfo *m_oSelectedFavorComposeInfo;
@property (nonatomic) BOOL m_bNeedShowedMoreFavInfo;
@property (nonatomic) unsigned long long m_uiShowFavorAmount;
@property (nonatomic) unsigned long long m_uiInvariableFavorAmount;
@property (nonatomic) BOOL m_bIsVariableFavor;
@property (retain, nonatomic) NSString *m_nsInvariableFavorDesc;
@property (retain, nonatomic) NSString *m_nsVariableFavorDesc;
@property (retain, nonatomic) WCPayBankCardFavorInfo *bank_card_info;
@property (retain) BankFavGuideForBindCard *bank_fav_guide;

- (void).cxx_destruct;

@end
