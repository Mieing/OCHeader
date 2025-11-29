@class NSString, NSArray, NSMutableDictionary, NSMutableArray, WCSTokenPickData;

@interface WCSTokenPickLogic : NSObject

@property (nonatomic) BOOL isTokenSearching;
@property (nonatomic) BOOL isTokenResulting;
@property (retain, nonatomic) NSString *rawQuery;
@property (retain, nonatomic) NSMutableArray *arrKeywords;
@property (retain, nonatomic) NSMutableArray *arrTokens;
@property (nonatomic) BOOL bNeedDisplayIndexContacts;
@property (retain, nonatomic) NSArray *arrIndexTitles;
@property (retain, nonatomic) NSMutableArray *arrLastSelectedTokens;
@property (retain, nonatomic) WCSTokenPickData *lastSelectedRecommendToken;
@property (retain, nonatomic) NSMutableArray *arrLastIndexContactTokens;
@property (retain, nonatomic) NSMutableDictionary *dicSelectedContact;
@property (retain, nonatomic) NSMutableDictionary *dicSelectedIndex;

- (id)init;
- (void)parseQuery:(id)a0;
- (BOOL)hasTokenResultCache;
- (void)cacheSelectedTokens;
- (void)handleNilQueryChanged;
- (long long)getSectionForSelectedContact:(id)a0;
- (char)getTokenDataTypeForSelectedContact:(id)a0;
- (id)getIndexContactTokenDatas;
- (id)getRecommendContactPickData;
- (id)getRecommendGroupPickData;
- (void)insertRecommendCOntactPickData:(id)a0;
- (void)addOneSectionToTokensFromIndex:(long long)a0;
- (long long)firstIndexOfIndexContactToken;
- (BOOL)hasSelectedIndexResult;
- (void).cxx_destruct;

@end
