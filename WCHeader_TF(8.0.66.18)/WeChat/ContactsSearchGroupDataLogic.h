@class NSString, NSMutableArray, WCSmartGroupCore;
@protocol ContactsSearchGroupDataLogicDelegate;

@interface ContactsSearchGroupDataLogic : MMObject <IFTSContactMgrExt>

@property (retain, nonatomic) NSString *nsCurrentSearchText;
@property (retain, nonatomic) NSString *taskKey;
@property (retain, nonatomic) NSMutableArray *arrFilteredContacts;
@property (retain, nonatomic) WCSmartGroupCore *recommendLogic;
@property (nonatomic) unsigned int smartGroupSeq;
@property (weak, nonatomic) id<ContactsSearchGroupDataLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (void)doAsynSearch:(id)a0;
- (void)delaySearch:(id)a0 slowMode:(BOOL)a1;
- (void)delaySearchImp:(id)a0;
- (void)updateAsynSearchQueryText:(id)a0;
- (id)getFilteredContacts;
- (void)clearAsynSearchLastQueryText;
- (id)getMatchTipForUserName:(id)a0;
- (id)getAllSearchMatchTip;
- (void)onFTSContactSearchFinish:(id)a0;
- (BOOL)fillSectionGroupResultForDicSearchResult;
- (id)getDicSessionCreateTime;
- (BOOL)asyncCheckAllSameRecommendAlreadyHadGroup:(id)a0;
- (void)finishTask:(id)a0;
- (unsigned int)genSeq;
- (void).cxx_destruct;

@end
