@class NSString, NSData, WCFinderLbsLifeSyncTask, NSMutableArray;

@interface WCFinderLbsLifeSyncRequestManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (retain, nonatomic) WCFinderLbsLifeSyncTask *currentTask;
@property (retain, nonatomic) NSString *keyBufMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)_checkTaskCanIgnore:(id)a0;
- (void)syncWithTask:(id)a0;
- (void)checkQueue;
- (void)_syncWithTask:(id)a0;
- (void).cxx_destruct;

@end
