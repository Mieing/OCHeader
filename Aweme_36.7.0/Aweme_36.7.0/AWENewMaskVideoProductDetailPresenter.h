@class AWEAwemeModel;

@interface AWENewMaskVideoProductDetailPresenter : AWEVideoPaymentBasePresenter

@property (retain, nonatomic) AWEAwemeModel *currentModel;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (void)checkVideoShouldUnlock:(id)a0;
- (id)initWithView:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3 context:(id)a4;
- (void)checkVideoShouldUnlockIfNeed;
- (void).cxx_destruct;

@end
