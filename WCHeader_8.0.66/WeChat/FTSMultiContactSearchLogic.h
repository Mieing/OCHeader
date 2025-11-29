@class NSString, NSArray, NSMutableDictionary, NSMutableArray, WCSmartGroupCore;
@protocol FTSMultiContactSearchDelegate;

@interface FTSMultiContactSearchLogic : NSObject <IFTSContactDataProviderExt> {
    NSMutableArray *_arrContact;
    NSMutableArray *_arrGroupContact;
    NSMutableDictionary *_dicContact;
    NSMutableArray *_arrKeywords;
    NSMutableArray *_arrResultWrap;
    BOOL _hasStaredSearch;
    WCSmartGroupCore *_recommendLogic;
    unsigned int _smartGroupSeq;
    NSMutableArray *_arrRecommendContacts;
}

@property (weak, nonatomic) id<FTSMultiContactSearchDelegate> delegate;
@property (nonatomic) BOOL bNewSearchForSingleQuery;
@property (retain, nonatomic) NSString *fullQuery;
@property (retain, nonatomic) NSArray *arrShareGroupStrictContact;
@property (nonatomic) BOOL bStrictMatchGroup;
@property (nonatomic) BOOL bForbidRecommendOpenIMContact;

+ (id)FilterArrKeywords:(id)a0;

- (id)init;
- (id)initWithQuerys:(id)a0 andKeywords:(id)a1;
- (void)initData:(id)a0;
- (void)fillSourceContact;
- (BOOL)isTargetContact:(id)a0;
- (id)getArrResultWrap;
- (id)getArrRecommendContactResultWrap;
- (void)appendResultWrap:(id)a0;
- (void)addOrderedResultFrom:(id)a0;
- (id)preFilterSourceContact;
- (void)asyncSearch;
- (void)sortContacts:(id)a0 matchTips:(id)a1;
- (void)handleQueryChanged:(id)a0;
- (void)handleQueryChanged:(id)a0 keywords:(id)a1;
- (void)onContactReload;
- (BOOL)asyncSearchRecommendsBy:(id)a0;
- (void)finishTask:(id)a0;
- (unsigned int)genSeq;
- (void)updateRecommendContacts:(id)a0;
- (void).cxx_destruct;

@end
