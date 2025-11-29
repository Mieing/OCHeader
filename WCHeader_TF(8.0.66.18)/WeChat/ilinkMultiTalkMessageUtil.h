@interface ilinkMultiTalkMessageUtil : NSObject

+ (id)genMessageWrapForFriend:(id)a0 contact:(id)a1 allTalkedMembers:(id)a2 msgType:(long long)a3 startTalkingTime:(double)a4 acceptTime:(double)a5 roomID:(unsigned long long)a6;
+ (id)genMsgJsonContentWithAllTalkedMembers:(id)a0;
+ (id)getContactInfoFromUserName:(id)a0;
+ (id)getUserNameFromContact:(id)a0;
+ (id)changeToKnownNameFromUsrName:(id)a0;

@end
