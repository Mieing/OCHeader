@class NSString, NSArray, FTSTopHitMgr, NSMutableDictionary, NSMutableArray, FTSContactDB;
@protocol FTSContactSearchTaskDelegate;

@interface FTSContactSearchTask : NSObject <FTSTopHitDelegate, IFTSContactDataProviderExt> {
    BOOL m_isCancel;
    BOOL m_isRunning;
    FTSContactDB *m_contactDB;
    NSMutableArray *m_arrSingleContact;
    NSMutableArray *m_arrGroupContact;
    NSMutableArray *m_arrBrandContact;
    NSMutableArray *m_arrBrandServiceContact;
    NSMutableArray *m_allContact;
    NSMutableDictionary *m_dicMatchTips;
    int m_searchType;
    NSString *m_pendingSearchText;
}

@property (copy, nonatomic) NSString *taskKey;
@property (weak, nonatomic) id<FTSContactSearchTaskDelegate> delegate;
@property (retain, nonatomic) FTSTopHitMgr *topHitMgr;
@property (retain, nonatomic) NSArray *extendSearchContacts;
@property (retain, nonatomic) NSString *newestQueryText;
@property (retain, nonatomic) NSString *lastQueryText;
@property (nonatomic) BOOL hasSearchDone;
@property (nonatomic) BOOL isMultiKeyMatch;
@property (nonatomic) BOOL useMixedSearchStrategy;
@property (copy, nonatomic) NSString *originalSearchText;
@property (copy, nonatomic) NSString *pinyinSearchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDB:(id)a0;
- (void)copyResultFromHomeTask:(id)a0 withSearchType:(int)a1;
- (void)dealloc;
- (void)asyncSearch:(id)a0 type:(int)a1;
- (void)forceSearch;
- (void)asyncSearch:(id)a0 type:(int)a1 isForce:(BOOL)a2;
- (int)getDBQueryType:(int)a0;
- (id)getMemSearchContactSourceWithType:(int)a0;
- (void)fillMultiKeywordContent:(id)a0 toHelpItem:(id)a1;
- (void)cancelSearch;
- (BOOL)checkMultiKeywordMatchInfo:(id)a0;
- (void)sortGroupContacts:(id)a0 dicMatchTip:(id)a1 dicSessionTime:(id)a2;
- (void)selectContact:(id)a0;
- (unsigned int)getTotalCount;
- (id)getAllContacts;
- (id)getSingleContacts;
- (unsigned int)getSingleContactsCount;
- (id)getGroupContacts;
- (unsigned int)getGroupContactsCount;
- (id)getBrandContacts;
- (unsigned int)getBrandContactsCount;
- (id)getBrandServiceContacts;
- (unsigned int)getBrandServiceContactsCount;
- (id)getAllSearchMatchTip;
- (id)getMatchTipForUserName:(id)a0;
- (BOOL)hasMatchWechatID;
- (id)getContactDictionary;
- (BOOL)isTopHitContactReady;
- (BOOL)isTopHitContactActive:(id)a0;
- (void)onContactReload;
- (void).cxx_destruct;

@end
