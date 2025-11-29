@class CardHomePageStoreList, NSString, CardHomePageFAQItem, CardSortInfoList, CardHomePageTopCellList, BaseResponse;

@interface GetMktCardHomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int nextOffset;
@property (nonatomic) unsigned int isAll;
@property (retain, nonatomic) CardHomePageStoreList *cardHomePageStoreList;
@property (retain, nonatomic) CardHomePageFAQItem *cardHomePageFaqItem;
@property (retain, nonatomic) NSString *ticketEnterWording;
@property (nonatomic) unsigned int isChangeSortRule;
@property (nonatomic) unsigned int changeSortRule;
@property (retain, nonatomic) CardSortInfoList *cardSortInfoList;
@property (retain, nonatomic) CardHomePageTopCellList *cardHomePageTopCellList;

+ (void)initialize;

@end
