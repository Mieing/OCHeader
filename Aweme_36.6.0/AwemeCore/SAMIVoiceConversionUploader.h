@class NSMutableDictionary, NSDictionary, AWEResourceUploadParametersResponseModel, NSMutableArray;
@protocol SAMIVoiceConversionUploaderDelegate;

@interface SAMIVoiceConversionUploader : NSObject

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSMutableDictionary *uploadDic;
@property (weak, nonatomic) id<SAMIVoiceConversionUploaderDelegate> delegate;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) NSDictionary *authParams;

- (id)logChain;
- (void)postCompleteTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (void)cancelSubTask:(id)a0;
- (void)uploadTasks:(id)a0 taskID:(id)a1;
- (id)createAudioFileUploaderUsePath:(id)a0;
- (void)addItem:(id)a0 uploader:(id)a1;
- (void)cancelTask:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;
- (void)cancelAllTasks;

@end
