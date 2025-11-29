@class SearchTagJumpResponse, WCTopicReportBaseItem, SearchTagJumpRequest;

@interface WCTopicJumpInfo : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned int eventId;
@property (weak, nonatomic) id object;
@property (retain, nonatomic) SearchTagJumpRequest *req;
@property (retain, nonatomic) SearchTagJumpResponse *rsp;
@property (nonatomic) BOOL isDuplicateReq;
@property (nonatomic) BOOL isReplaced;
@property (nonatomic) BOOL isTimeout;
@property (retain, nonatomic) WCTopicReportBaseItem *reportItem;
@property (nonatomic) BOOL isMsgRecord;
@property (nonatomic) BOOL openWeAppWithoutAlert;

- (BOOL)isTrash;
- (int)jumpType;
- (void)sendResult;
- (BOOL)isEqualReq:(id)a0;
- (void).cxx_destruct;

@end
