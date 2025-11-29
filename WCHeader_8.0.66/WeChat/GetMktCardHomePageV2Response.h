@class NSString, CardHomePageTopCellGroup, CardHomePageFAQItem, CardHomePageRecentlyUsedList, BaseResponse;

@interface GetMktCardHomePageV2Response : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) CardHomePageTopCellGroup *cardHomePageTopCellGroup;
@property (nonatomic) unsigned int nextOffset;
@property (nonatomic) unsigned int isAll;
@property (retain, nonatomic) CardHomePageRecentlyUsedList *cardHomePageRecentlyUsedList;
@property (retain, nonatomic) CardHomePageFAQItem *cardHomePageFaqItem;
@property (retain, nonatomic) NSString *recentlyUsedWording;

+ (void)initialize;

@end
