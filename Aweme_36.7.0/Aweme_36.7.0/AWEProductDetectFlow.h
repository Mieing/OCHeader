@class AWEProductDetectRequestTaskCenter, AWEVideoPublishViewModel;

@interface AWEProductDetectFlow : NSObject

@property (weak, nonatomic) AWEProductDetectRequestTaskCenter *taskCenter;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;

+ (void)requestProductDetectPost:(long long)a0 key:(id)a1 completion:(id /* block */)a2;
+ (void)p_post:(id)a0 params:(id)a1 key:(id)a2 callback:(id /* block */)a3;
+ (void)requestProductDetectPostCancelWithToken:(id)a0 completion:(id /* block */)a1;
+ (id)flowWithModel:(id)a0;

- (BOOL)checkProductDetectEnabledWithToastInfo:(id *)a0;
- (BOOL)checkHasProductDetectAbility;
- (BOOL)checkProductDetectEnabled;
- (BOOL)checkProductDetectToggleState;
- (void)showProductDetectPostCheckErrorAlertWithTitle:(id)a0 popType:(int)a1 completion:(id /* block */)a2;
- (void)requestProductDetectPostWithCompletion:(id /* block */)a0;
- (void)checkProductDetectPublishWithCompletion:(id /* block */)a0;
- (void)requestProductDetectInfoWithCompletion:(id /* block */)a0;
- (void)requestProductDetectPostCancelWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
