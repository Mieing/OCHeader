@class NSString, CJPayUnifyCashierRenderModel, CJPayBaseViewController, CJPayDefaultChannelShowConfig;

@interface CJPayUnifyPreVerifyModel : NSObject

@property (copy, nonatomic) NSString *processId;
@property (retain, nonatomic) CJPayUnifyCashierRenderModel *unifyModel;
@property (weak, nonatomic) CJPayBaseViewController *homePageVC;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;

- (void).cxx_destruct;

@end
