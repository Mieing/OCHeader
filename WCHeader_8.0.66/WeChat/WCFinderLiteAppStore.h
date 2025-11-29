@class MMTimer, NSString;

@interface WCFinderLiteAppStore : NSObject <MMLiteAppStoreExt>

@property (copy, nonatomic) id /* block */ complectionBlock;
@property (nonatomic) unsigned long long callBackID;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) MMTimer *overTimeCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dispatchStore:(id)a0 actionName:(id)a1 json:(id)a2 complection:(id /* block */)a3;

- (void)checkOverTime;
- (void)dealloc;
- (void)onStoreSendResult:(id)a0 callbackId:(int)a1 resultType:(id)a2 result:(id)a3;
- (void)onStoreSetData:(id)a0 changes:(id)a1;
- (void).cxx_destruct;

@end
