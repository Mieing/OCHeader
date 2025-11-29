@class WCFinderInvalidTipsView, NSString, WCFinderInvalidTipsInfo;

@interface WCFinderInvalidViewController : MMUIViewController <WCFinderInvalidTipsViewDelegate>

@property (retain, nonatomic) WCFinderInvalidTipsInfo *tipsInfo;
@property (retain, nonatomic) WCFinderInvalidTipsView *invalidTipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInvalidTipsInfo:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)a0;
- (void)finderInvalidTipsView:(id)a0 didClickLink:(id)a1;
- (void)finderInvalidTipsViewDidClickComplainButton:(id)a0;
- (void).cxx_destruct;

@end
