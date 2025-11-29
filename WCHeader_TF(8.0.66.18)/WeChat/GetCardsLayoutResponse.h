@class NSString, CardsHomePageList, SecEntranceCardList, BaseResponse;

@interface GetCardsLayoutResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonRet;
@property (retain, nonatomic) NSString *layoutBuff;
@property (retain, nonatomic) CardsHomePageList *cardsHomePageList;
@property (nonatomic) unsigned int homePageCardNum;
@property (retain, nonatomic) SecEntranceCardList *secEntranceCardList;

+ (void)initialize;

@end
