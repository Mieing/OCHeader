@class NSMutableArray;

@interface AWELivePreStream0vvRecordManager : NSObject

@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSMutableArray *postedRecords;

+ (id)sharedManager;

- (void)post0vvRecordWithCurrentIndex:(unsigned long long)a0 withCompleteCallback:(id /* block */)a1;
- (BOOL)hasPost0vvWithRoomId:(id)a0;
- (void)track0vvWithRoomIds:(id)a0;
- (void)record0vvModel:(id)a0;
- (void)remove0vvRecord:(id)a0;
- (void).cxx_destruct;

@end
