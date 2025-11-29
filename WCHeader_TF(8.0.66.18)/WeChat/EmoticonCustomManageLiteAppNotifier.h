@class MMLiteAppViewController, NSMutableSet, NSString;

@interface EmoticonCustomManageLiteAppNotifier : NSObject <EmoticonBackupOperateMgrExt>

@property (retain, nonatomic) NSMutableSet *observingMd5s;
@property (weak, nonatomic) MMLiteAppViewController *currentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerMd5:(id)a0;
- (id)getMd5Status:(id)a0;
- (void)notifyUpdateForMd5s:(id)a0;
- (void)onAddBackupEmoticonOK:(id)a0 addEmoticonWrap:(id)a1;
- (void)onAddBackupEmoticonFailed:(id)a0 reason:(unsigned long long)a1 remoteErrMsg:(id)a2;
- (void)onDeleteBackupEmoticonOK:(id)a0;
- (void)onDeleteBackupEmoticonFailed:(id)a0;
- (void).cxx_destruct;

@end
