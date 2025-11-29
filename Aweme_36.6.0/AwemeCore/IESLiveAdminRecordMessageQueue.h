@class NSString, NSMutableArray, HTSLiveAdminRecordMessage;

@interface IESLiveAdminRecordMessageQueue : NSObject

@property (retain, nonatomic) NSMutableArray *messsageQueue;
@property (retain, nonatomic) NSMutableArray *urlQueue;
@property (retain, nonatomic) HTSLiveAdminRecordMessage *frontMessage;
@property (retain, nonatomic) NSString *frontPlayUrl;

- (void)pushWithModel:(id)a0 playUrl:(id)a1;
- (void)pop;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (long long)length;

@end
