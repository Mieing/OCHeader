@class NSString, CMessageWrap;

@interface RoomHistoryContext : NSObject

@property (retain, nonatomic) CMessageWrap *historyMessage;
@property (retain, nonatomic) CMessageWrap *downloadingHistoryRecordMsg;
@property (retain, nonatomic) NSString *nsEventIdForRevokeHistoryRecord;
@property (nonatomic) BOOL revokeAndDeletingMemberFlag;
@property (nonatomic) BOOL isExpiredForRevoking;

+ (void)StatOperRoom:(id)a0 HistoryMessage:(id)a1 ClickType:(unsigned int)a2 RemovedMembers:(id)a3 CgiResult:(unsigned int)a4;
+ (void)StatViewHistory:(id)a0 HistoryMessage:(id)a1;

- (void)reset;
- (void).cxx_destruct;

@end
