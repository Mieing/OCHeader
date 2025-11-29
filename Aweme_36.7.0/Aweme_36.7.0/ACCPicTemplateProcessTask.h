@class NSArray, NSTimer, NSString, NSError, ACCPicTemplateModel, AWEGenericTemplateAIGCTaskTrackModel;
@protocol ACCPicTemplateProcessTaskDelegate, AWEAIGCBusinessTaskProtocol;

@interface ACCPicTemplateProcessTask : NSObject <ACCTemplateProcessTaskProtocol>

@property (nonatomic) long long aigcResultType;
@property (retain, nonatomic) NSArray *requestResourceModels;
@property (retain, nonatomic) NSArray *aigcResult;
@property (retain, nonatomic) NSError *requestError;
@property (retain, nonatomic) NSTimer *aigcTimer;
@property (weak, nonatomic) id<AWEAIGCBusinessTaskProtocol> aigcBizTask;
@property (weak, nonatomic) id<ACCPicTemplateProcessTaskDelegate> delegate;
@property (retain, nonatomic) NSString *projectUUID;
@property (retain, nonatomic) ACCPicTemplateModel *templateModel;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSArray *cachedResourceModels;
@property (retain, nonatomic) AWEGenericTemplateAIGCTaskTrackModel *trackModel;
@property (readonly, copy, nonatomic) NSString *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)cancelAIGCTask;
- (void)stopAIGCTimer;
- (void)startAIGCTimer;
- (void)handleAIGCTimer;
- (BOOL)requestAIGCResultWithFilterResourceModels:(id)a0 templateId:(id)a1 scene:(long long)a2 targetFolder:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
