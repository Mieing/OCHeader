@class NSString;

@interface APTrackManager : NSObject

@property (readonly, nonatomic) NSString *aplinktoken;
@property (readonly, nonatomic) NSString *apiInvokeTs;
@property (readonly, nonatomic) NSString *callType;

+ (id)shared;

- (void)transactionWillStart:(id)a0 andApi:(id)a1 withNewLog:(BOOL)a2;
- (void)transactionStoreToLocal;
- (void)onTrackAction:(id)a0 actionName:(id)a1;
- (void)onTrackBizError:(id)a0 error:(id)a1;
- (void)onTrackCraError:(id)a0 error:(id)a1;
- (void)onTrackNetError:(id)a0 error:(id)a1;
- (void)onTrackWarn:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)transactionDidFinish;

@end
