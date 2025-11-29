@class UITapGestureRecognizer, NSString;

@interface AWEIMShareDSPMusicContentPresenter : AWEIMUIViewPresenter <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ cardTapBlock;
@property (retain, nonatomic) UITapGestureRecognizer *tapCardGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)willUnBindView:(id)a0;
- (void)p_didTappedCard:(id)a0;
- (void).cxx_destruct;

@end
