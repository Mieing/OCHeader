@class DUXAlertDialog;

@interface ACCAIGCLoraHelper : NSObject

@property (retain, nonatomic) DUXAlertDialog *deleteAlertConfirmView;

- (void)showNoAlbumAuthWithViewController:(id)a0 action:(id /* block */)a1;
- (void)destroyAllResource;
- (void)showDeleteAIGCLoraInfoWithViewController:(id)a0 remainTimes:(long long)a1 action:(id /* block */)a2;
- (void)showAddAIGCLoraInfoWithViewController:(id)a0 remainTimes:(long long)a1 action:(id /* block */)a2;
- (void)showRetryAIGCLoraInfoWithViewController:(id)a0 detailInfo:(id)a1 remainTimes:(long long)a2 action:(id /* block */)a3;
- (void)showRetryAIGCLoraInfoWithViewController:(id)a0 remainTimes:(long long)a1 canRetry:(BOOL)a2 action:(id /* block */)a3;
- (void).cxx_destruct;

@end
