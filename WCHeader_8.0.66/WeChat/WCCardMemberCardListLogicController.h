@class NSString, NSMutableOrderedSet;

@interface WCCardMemberCardListLogicController : MMObject <IWCCardPkgExt> {
    NSMutableOrderedSet *_allSortedMemberCardsList;
}

@property (copy, nonatomic) id /* block */ fetchDataCompleteBlcok;
@property (copy, nonatomic) id /* block */ delCompleteBlcok;
@property (copy, nonatomic) id /* block */ giftCompleteBlcok;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)fetchData:(id /* block */)a0;
- (void)delMemberCard:(id)a0 complete:(id /* block */)a1;
- (void)giftMemberCardId:(id)a0 toUsrName:(id)a1 complete:(id /* block */)a2;
- (unsigned int)getNumberOfMemberCards;
- (id)getMemberCardAtRow:(long long)a0;
- (long long)getIdxOfMemberCard:(id)a0;
- (void)removeMemberCardDataAtRow:(long long)a0;
- (void)loadMemberCards;
- (id)findCard:(id)a0 inList:(id)a1;
- (void)onGiftCard:(id)a0 ErrCode:(int)a1;
- (void)onDeleteCardIDList:(id)a0 ErrCode:(int)a1;
- (void)onGetCardData:(id)a0 ErrCode:(int)a1;
- (void).cxx_destruct;

@end
