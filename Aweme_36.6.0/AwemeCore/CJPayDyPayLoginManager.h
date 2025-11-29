@class CJPayDyPayProcessConfigModel, CJPayLoginViewControllerV2;

@interface CJPayDyPayLoginManager : NSObject

@property (retain, nonatomic) CJPayDyPayProcessConfigModel *configModel;
@property (weak, nonatomic) CJPayLoginViewControllerV2 *loginV2;

- (void)p_handleABTestEntranceWithResponse:(id)a0 error:(id)a1;
- (void)p_requestLoginSignPageWithCompletion:(id /* block */)a0;
- (void)p_handleABTestDefaultWithResponse:(id)a0;
- (void)p_handleABTestOneWithResponse:(id)a0;
- (void)startToRequestPageConfigWithConfigModel:(id)a0;
- (void).cxx_destruct;

@end
