@class NSString, NSMutableDictionary, NSArray, NSMutableArray;
@protocol ContactTagSearchFromContactLogicDelegate;

@interface ContactTagSearchFromContactLogic : MMObject <IFTSContactMgrExt>

@property (retain, nonatomic) NSString *nsCurrentSearchText;
@property (retain, nonatomic) NSString *taskKey;
@property (retain, nonatomic) NSMutableArray *arrFilteredContactTags;
@property (retain, nonatomic) NSMutableDictionary *dicFilteredContactUserNameMatchTip;
@property (retain, nonatomic) NSArray *arrIgnoreContactTagID;
@property (retain, nonatomic) NSArray *arrExistsContactTagData;
@property (weak, nonatomic) id<ContactTagSearchFromContactLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (void)doAsynSearch:(id)a0 arrIgnoreContactTagID:(id)a1 arrExistsContactTagData:(id)a2;
- (void)delaySearch:(id)a0 slowMode:(BOOL)a1;
- (void)delaySearchImp:(id)a0;
- (void)updateAsynSearchQueryText:(id)a0;
- (id)getFilteredContactTags;
- (id)getAllContactUserNameMatchTip;
- (void)onFTSContactSearchFinish:(id)a0;
- (BOOL)fillSectionResultForDicSearchResult;
- (void).cxx_destruct;

@end
