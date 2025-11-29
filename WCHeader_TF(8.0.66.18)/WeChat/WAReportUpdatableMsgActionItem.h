@class NSString, NSNumber;

@interface WAReportUpdatableMsgActionItem : WAReportBaseItem

@property (retain, nonatomic) NSString *shareTicket;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *fullPagePath;
@property (nonatomic) unsigned long long eventId;
@property (retain, nonatomic) NSNumber *pushMsgState;
@property (nonatomic) unsigned int subscribeState;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
