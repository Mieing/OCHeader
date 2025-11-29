@class WCCardUsedStoreInfo, WCCardDataCardInfo, WCCardDataCardTPInfo, CContact, NSMutableArray, NSMutableDictionary;
@protocol WCCardDetailContentLogicDelegate, WCCardDataSource;

@interface WCCardDetailContentViewLogicController : MMObject

@property (weak, nonatomic) id<WCCardDetailContentLogicDelegate> delegate;
@property (retain, nonatomic) id<WCCardDataSource> cardDataSource;
@property (retain, nonatomic) WCCardDataCardInfo *cardInfo;
@property (retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo;
@property (nonatomic) BOOL bIsShareCardMode;
@property (retain, nonatomic) WCCardUsedStoreInfo *nearbyStoreInfo;
@property (retain, nonatomic) CContact *serviceContact;
@property (nonatomic) int cardStatus;
@property (retain, nonatomic) NSMutableArray *tableSectionDataArr;
@property (retain, nonatomic) NSMutableDictionary *tableRowDataDict;

- (id)initLogicControllerWithCardDataSource:(id)a0 isShareCardMode:(BOOL)a1 usedStoreInfo:(id)a2 serviceContact:(id)a3 cardStatus:(int)a4 delegate:(id)a5;
- (void)updateLogicControllerWithCardDataSource:(id)a0 isShareCardMode:(BOOL)a1 withOneUsedStoreInfo:(id)a2 withServiceContact:(id)a3 withCardStatus:(int)a4;
- (id)getCardDataSource;
- (id)getCardTPInfo;
- (id)getCardInfo;
- (id)getNearbyStoreInfo;
- (id)getServiceContact;
- (BOOL)hasBrandColor;
- (id)getBrandColor;
- (BOOL)hasBaseIntroView;
- (BOOL)hasSecondaryView;
- (BOOL)hasMoneyView;
- (BOOL)bIsIphone5ShareCardMode;
- (BOOL)hasServiceFollowInfo;
- (BOOL)hasReceive;
- (id)getGiftCardShareDetailContent;
- (void)calcTableViewSectionData;
- (id)getTableSectionDataArr;
- (id)getTableRowArrWithSectionIndex:(unsigned long long)a0;
- (BOOL)hasOperationField;
- (BOOL)hasDetailView;
- (BOOL)hasImageInDetailView;
- (BOOL)hasNearByShopInfo;
- (BOOL)hasUsedStoreInfo;
- (BOOL)hasServiceContactInfo;
- (BOOL)hasCellList0Info;
- (BOOL)isMemberCard;
- (BOOL)isTicketCard;
- (BOOL)hasGiftToFriendInfo;
- (BOOL)bShowQRCodeCell;
- (BOOL)bShowCodeCell;
- (BOOL)bShowRapidPayOrderCell;
- (BOOL)isCardDataExistInDB;
- (BOOL)hasDetailTable;
- (BOOL)isNeedShowAcceptBtn;
- (id)getAcceptBtnTitle;
- (BOOL)isAcceptBtnEnable;
- (void).cxx_destruct;

@end
