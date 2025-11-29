@interface AWEIMMsgStateUtil : NSObject

+ (BOOL)shouldShowMsgStateForAnchorMsg:(id)a0 conversation:(id)a1;
+ (BOOL)shouldShowMsgStateForCommonMsg:(id)a0;
+ (BOOL)isAlwaysShowReadStateMsg:(id)a0;
+ (BOOL)needShowStateForMsgType:(id)a0;
+ (BOOL)isMsgWarnState:(id)a0;
+ (BOOL)isAlwaysShowReadStateMsgOpt:(id)a0;
+ (BOOL)disableNoFriendsShowReadStatWithPeerUser:(id)a0;
+ (BOOL)shouldCreateReceiptModelForMessage:(id)a0;
+ (BOOL)shouldUpdateReadStateForMessage:(id)a0 conversation:(id)a1;
+ (BOOL)shouldShowReadStateForAnchorMsg:(id)a0 conversation:(id)a1;

@end
