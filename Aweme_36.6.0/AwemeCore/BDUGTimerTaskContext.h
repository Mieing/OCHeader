@class NSString, BDUGLuckyTimerTaskInfoModel;
@protocol BDUGTimerTaskContextDelegate;

@interface BDUGTimerTaskContext : NSObject <BDUGLuckyTimerTaskContextProtocol>

@property (weak, nonatomic) id<BDUGTimerTaskContextDelegate> delegate;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) BDUGLuckyTimerTaskInfoModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePendantPosition:(id)a0;
- (void)tryUploadTaskProgress;
- (void)updateClientExtraParams:(id)a0;
- (void)retryUploadTaskProgress;
- (id)initWithModel:(id)a0 progress:(double)a1 status:(unsigned long long)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
