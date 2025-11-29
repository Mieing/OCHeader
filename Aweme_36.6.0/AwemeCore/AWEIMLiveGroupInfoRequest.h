@interface AWEIMLiveGroupInfoRequest : NSObject

+ (void)p_splitConversationIds:(id)a0 avartarNeeded:(BOOL)a1 completion:(id /* block */)a2 max:(int)a3;
+ (void)p_fetchPeopleInLiveWithConversationIds:(id)a0 avartarNeeded:(BOOL)a1 completion:(id /* block */)a2;
+ (id)groupIdStringFrom:(id)a0;
+ (void)fetchPeopleInLiveWithConversationIds:(id)a0 avartarNeeded:(BOOL)a1 completion:(id /* block */)a2;

@end
