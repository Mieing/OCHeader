@class NSString;

@interface WCSearchReportModel : WSReportBaseItem

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *msgFromUserName;
@property (nonatomic) unsigned long long chatType;
@property (copy, nonatomic) NSString *chatRoomId;

- (id)init;
- (id)initWithMsgWrap:(id)a0;
- (id)initWithSNSItem:(id)a0 chatType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
