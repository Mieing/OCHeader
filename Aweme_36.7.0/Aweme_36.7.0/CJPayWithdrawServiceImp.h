@class NSString;
@protocol CJPayAPIDelegate;

@interface CJPayWithdrawServiceImp : NSObject <CJPayWithdrawService>

@property (retain, nonatomic) id<CJPayAPIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedInstance;

- (void)i_openWithdrawDeskWithUrl:(id)a0 delegate:(id)a1;
- (void)i_openH5WithdrawDeskWithParams:(id)a0 delegate:(id)a1;
- (void)p_processWebCallback:(id)a0;
- (void)handleCJWithdrawWebCallBack:(id)a0;
- (void).cxx_destruct;

@end
