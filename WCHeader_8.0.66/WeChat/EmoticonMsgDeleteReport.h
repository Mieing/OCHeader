@class NSMutableArray;

@interface EmoticonMsgDeleteReport : NSObject

@property (retain, nonatomic) NSMutableArray *emoticonDeleteReportList;
@property (copy, nonatomic) id /* block */ reportTask;

- (id)init;
- (void)doReportMsgDelete:(id)a0 createTime:(unsigned int)a1 isSender:(BOOL)a2 talker:(id)a3;
- (void)flushReportTask:(id)a0;
- (void)doReportTalkerDelete:(id)a0;
- (void).cxx_destruct;

@end
