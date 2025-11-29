@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEVideoDraftTracker : NSObject

@property (nonatomic) BOOL isTracked;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

+ (void)trackDraftReadFailure:(id)a0 errorType:(id)a1 errorMsg:(id)a2 scene:(id)a3 publishModel:(id)a4;
+ (void)trackDraftMarkedAsPendingDelete:(id)a0 status:(BOOL)a1 reason:(id)a2;
+ (void)trackBackupMarkedAsPendingDelete:(id)a0 status:(BOOL)a1;
+ (void)trackDraftExpireTimeExtended:(id)a0 days:(long long)a1 status:(BOOL)a2;
+ (void)trackDraftCountChanged:(long long)a0 draftContextId:(id)a1;
+ (void)trackDraftDeleted:(id)a0 status:(BOOL)a1 reason:(id)a2;
+ (void)trackBackupDeleted:(id)a0 status:(BOOL)a1;
+ (void)trackDraftDeleteResource:(id)a0 success:(BOOL)a1 error:(id)a2;
+ (void)trackIfAWEMusicDirHasSpecifiedMusicFile:(BOOL)a0;
+ (void)trackDraftDBPerformance:(id)a0 function:(id)a1 timeInMillSecond:(long long)a2 operation:(id)a3;
+ (void)trackDraftDBManagement:(id)a0 function:(id)a1 operation:(id)a2 error:(id)a3 status:(long long)a4;
+ (void)trackVideoAssetValidation:(BOOL)a0 errorType:(id)a1 path:(id)a2 error:(id)a3 publishModel:(id)a4 extraParams:(id)a5;
+ (id)eventNameWithSuffix:(long long)a0 prefix:(id)a1;
+ (void)trackDraftDegradeWithDraftID:(id)a0 creationType:(id)a1 needDegrade:(BOOL)a2 strategyClass:(Class)a3 result:(id)a4 errorMsg:(id)a5 publishModel:(id)a6;
+ (void)trackVideoAssetValidation:(BOOL)a0 errorType:(id)a1 path:(id)a2 error:(id)a3 publishModel:(id)a4;
+ (void)trackDraftDegradeResult:(id)a0;
+ (void)trackNonInfiniDraftRecover:(id)a0;
+ (void)trackDraftSave:(id)a0;

- (void)asyncOperationBlock:(id /* block */)a0;
- (void)trackDraftInfo;
- (void).cxx_destruct;
- (id)init;

@end
