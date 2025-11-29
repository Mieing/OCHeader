@class NSMutableArray, NSString, BDUGLuckyTimingHelper, BDUGTimerTaskContext, BDUGLuckyPendantHelper;
@protocol BDUGLuckyTimerTaskItemDelegate, BDUGLuckyTimerTaskContextProtocol;

@interface BDUGLuckyTimerTaskItem : NSObject <BDUGTimerTaskContextDelegate, BDUGLuckyTimerHelperDelegateProtocol, BDUGLuckyTimerTriggerListenerProtocol>

@property (weak, nonatomic) id<BDUGLuckyTimerTaskItemDelegate> delegate;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) BDUGTimerTaskContext *context;
@property (retain, nonatomic) BDUGLuckyTimingHelper *timingHelper;
@property (retain, nonatomic) BDUGLuckyPendantHelper *pendantHelper;
@property (nonatomic) BOOL isTiming;
@property (nonatomic) double incrementTs;
@property (nonatomic) double unUploadedTs;
@property (retain, nonatomic) NSMutableArray *upcomingUploadMillstone;
@property (nonatomic) BOOL isUploading;
@property (nonatomic) double tsSinceLastCache;
@property (nonatomic) BOOL hasReportedStartTiming;
@property (nonatomic) BOOL hasReportedExpireReqFail;
@property (readonly, nonatomic) id<BDUGLuckyTimerTaskContextProtocol> taskContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTimerTrigger:(double)a0;
- (void)reorderPendantPriority;
- (id)initWithModel:(id)a0 token:(id)a1 delegate:(id)a2;
- (void)__convertStatus:(unsigned long long)a0;
- (void)__triggerUploadIfNeed;
- (void)__saveUnuploadedTsIfNeed;
- (void)__triggerUploadIfReachInterval;
- (void)__triggerUploadWithScene:(id)a0;
- (double)__uploadInterval;
- (void)__updateUpcomingUploadMillstone;
- (void)__saveUnuploadedTs;
- (double)__saveUnuploadedTsInterval;
- (void)onUpdateTimingStatus:(unsigned long long)a0;
- (void)tryUploadTaskProgress;
- (void).cxx_destruct;
- (void)updateToken:(id)a0;
- (void)applicationDidEnterBackgroundNotification;
- (void)dealloc;
- (void)stopTask;

@end
