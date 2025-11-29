@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface UDRCheckListener : MMUserService <MMServiceProtocol> {
    NSMutableArray *_projectIdArray;
    NSMutableDictionary *_paramsMap;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)checkUDRUpdate;
- (void)repeatCheckUDRUpdate;
- (void)doUpdateUDR;
- (void)doCleanUDR;
- (void)updateProjectIdArray;
- (void).cxx_destruct;

@end
