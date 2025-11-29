@class CJPayTimerManager, NSString, UIView, CJPayBaseLoadingView;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayTopLoadingItem : CJPayBaseLoadingItem <CJPayAdvanceLoadingProtocol>

@property (retain, nonatomic) CJPayBaseLoadingView *loadingView;
@property (retain, nonatomic) UIView *customLoadingOnView;
@property (retain, nonatomic) CJPayTimerManager *timerManager;
@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadingType;

- (void)startLoadingWithTitle:(id)a0;
- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithVc:(id)a0;
- (void)startLoadingWithVc:(id)a0 title:(id)a1;
- (void)startLoadingWithValidateTimer:(BOOL)a0;
- (void)startLoadingWithVc:(id)a0 title:(id)a1 onView:(id)a2;
- (void)startLoadingOnView:(id)a0 title:(id)a1;
- (double)p_loadingTimeout;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)setTimer;

@end
