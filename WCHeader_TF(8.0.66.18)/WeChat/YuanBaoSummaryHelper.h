@class NSString, ChatRecordData;

@interface YuanBaoSummaryHelper : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) ChatRecordData *chatRecordData;

- (id)initWithMsgs:(id)a0;
- (id)getYunaBaoSummaryChatRecordsUrl;
- (id)getYunaBaoSummaryFileUrl;
- (id)getYunaBaoSummaryMPUrl;
- (void).cxx_destruct;

@end
