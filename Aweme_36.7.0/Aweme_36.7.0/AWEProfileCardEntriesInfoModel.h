@class NSArray, NSString, NSNumber;

@interface AWEProfileCardEntriesInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long cardStyle;
@property (copy, nonatomic) NSArray *profileCommonServiceCardList;
@property (copy, nonatomic) NSArray *profileServiceAndManageCardList;
@property (copy, nonatomic) NSString *profileCommonServiceTitle;
@property (copy, nonatomic) NSString *profileServiceAndManageTitle;
@property (nonatomic) unsigned long long hasEditPageEntry;
@property (nonatomic) long long enableEditCard;
@property (copy, nonatomic) NSArray *showCardIds;
@property (copy, nonatomic) NSArray *defaultAllCards;
@property (retain, nonatomic) NSNumber *shouldReportAutoSort;
@property (retain, nonatomic) NSNumber *enableAutoSort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileCommonServiceCardListJSONTransformer;
+ (id)profileServiceAndManageCardListJSONTransformer;
+ (id)defaultAllCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
