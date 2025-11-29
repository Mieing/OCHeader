@class NSString, NSMutableArray;

@interface WCMomentsForwardMgr : MMObject <WCMomentsForwardBaseOpDelegate>

@property (retain, nonatomic) NSMutableArray *forwardArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startForward:(id)a0 toCustomContact:(id)a1;
- (void)onMomentsForwardOpDidSend:(id)a0;
- (void)onMomentsForwardOpDidCancel:(id)a0;
- (void)asyncRecordMicroMerchantForwardInteractionIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
