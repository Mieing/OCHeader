@class NSMutableArray, NSMutableSet;

@interface WCSmartGroupCore : NSObject

@property (retain, nonatomic) NSMutableArray *arrSourceGroup;
@property (retain, nonatomic) NSMutableSet *setMMUsername;

- (void)asyncGetRelatedChatRoomWithInfo:(id)a0 completeBlock:(id /* block */)a1;
- (void)taskRecursive:(id)a0 restrictMemberList:(id)a1 mmUsrSet:(id)a2 runInfo:(id)a3 completeBlock:(id /* block */)a4;
- (id)getSearchRecommendGroups:(id)a0 restrictMemberList:(id)a1;
- (id)getNewSearchRecommendGroups:(id)a0 restrictMemberList:(id)a1 searchRecommendGroupDiff:(unsigned int)a2;
- (void)dispatchMainFinish:(id)a0 runInfo:(id)a1 completeBlock:(id /* block */)a2;
- (id)getAllGroup;
- (id)getAllMMSingleContactUsername;
- (id)searchGroupContacts:(id)a0 strictByGroupMember:(id)a1;
- (BOOL)strictMemberMatch:(id)a0 withMember:(id)a1;
- (id)findTopUsrsInGroups:(id)a0 mmUsrSet:(id)a1 runInfo:(id)a2;
- (void)addUsr:(id)a0 runInfo:(id)a1 groupContact:(id)a2 toDic:(id)a3 andScore:(id)a4;
- (id)getRelatedChatRoom:(id)a0 containMembers:(id)a1;
- (void).cxx_destruct;

@end
