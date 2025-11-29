@class NSString, NSArray, LVTemplateProcessor, ACCRecommendTemplateInfo, LVTemplateDataManager, NSError, NSDictionary;

@interface AWESelectTemplateInternalProcessOperation : NSOperation <LVTemplateProcessorDelegate> {
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property (nonatomic) double startTime;
@property (retain, nonatomic) ACCRecommendTemplateInfo *templateInfo;
@property (copy, nonatomic) NSArray *assetsArray;
@property (retain, nonatomic) LVTemplateProcessor *processor;
@property (retain, nonatomic) LVTemplateDataManager *result;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *importedAssetsDic;
@property (copy, nonatomic) id /* block */ templateCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateProcessor:(id)a0 didChangeProgress:(double)a1;
- (void)templateProcessor:(id)a0 didPrepareResource:(id)a1;
- (void)templateProcessor:(id)a0 didFailWithErrorCode:(unsigned long long)a1 withSubCode:(id)a2;
- (void)templateProcessor:(id)a0 didCompleteWithDataManager:(id)a1;
- (id)initWithTemplateModel:(id)a0 assetsArray:(id)a1;
- (void)setErrorForCancel;
- (void)templateDownloadCallbackWithFilePath:(id)a0 error:(id)a1 templateModel:(id)a2;
- (void)genFragmentInfoAndReplace;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)setExecuting:(BOOL)a0;
- (void)done;
- (void)setFinished:(BOOL)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (id)templateModel;

@end
