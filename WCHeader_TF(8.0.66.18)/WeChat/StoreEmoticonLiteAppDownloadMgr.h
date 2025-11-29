@class MMLiteAppViewController, NSMutableDictionary, NSString;

@interface StoreEmoticonLiteAppDownloadMgr : NSObject <StoreEmoticonLiteAppDownloadLogicDelegate>

@property (retain, nonatomic) NSMutableDictionary *donwloadLogicDic;
@property (weak, nonatomic) MMLiteAppViewController *currentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerStoreItem:(id)a0 scene:(int)a1;
- (void)doOperation:(long long)a0 forPid:(id)a1 downloadType:(int)a2 reportInfo:(id)a3;
- (void)onDownloadProgress:(float)a0 pid:(id)a1;
- (void)onDownloadStatusChangeTo:(int)a0 pid:(id)a1;
- (void).cxx_destruct;

@end
