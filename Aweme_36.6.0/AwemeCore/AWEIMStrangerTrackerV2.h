@interface AWEIMStrangerTrackerV2 : NSObject

+ (void)trackEnterProfile:(id)a0 enterMethod:(id)a1;
+ (void)trackStrangerChatCellShow:(id)a0 ext:(id)a1;
+ (id)getToRelationTagWithChatModel:(id)a0;
+ (id)getRelationTagWithChatModel:(id)a0;
+ (void)trackStrangerChatClick:(id)a0 ext:(id)a1;
+ (void)trackBlockChat:(id)a0 event:(id)a1 ext:(id)a2;
+ (id)generateInfoWithChat:(id)a0;
+ (id)getFirstLabelWithDict:(id)a0;
+ (id)getSecondLabelWithDict:(id)a0;
+ (void)trackEnterChat:(id)a0 enterMethod:(id)a1;

@end
