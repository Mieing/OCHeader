@class NSString, NSMutableArray, NSMutableDictionary;
@protocol SAMIVoiceConversionExporterDelegate;

@interface SAMIVoiceConversionExporter : NSObject

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSMutableDictionary *exportDic;
@property (weak, nonatomic) id<SAMIVoiceConversionExporterDelegate> delegate;
@property (copy, nonatomic) NSString *exportDir;

- (id)logChain;
- (void)postCompleteTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (void)cancelSubTask:(id)a0;
- (void)addItem:(id)a0 export:(id)a1;
- (void)exportVCTasks:(id)a0 taskID:(id)a1;
- (void)cancelTask:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;
- (void)cancelAllTasks;

@end
