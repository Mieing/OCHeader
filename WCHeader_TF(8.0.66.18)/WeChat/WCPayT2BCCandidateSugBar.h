@class NSString, NSMutableArray, UIScrollView;
@protocol WCPayT2BCCandidateSugBarDelegate;

@interface WCPayT2BCCandidateSugBar : UIView <UIScrollViewDelegate, WCPayT2BCCandidateViewDelegate>

@property (retain, nonatomic) NSMutableArray *m_resultsArray;
@property (retain, nonatomic) NSMutableArray *m_candidateViewArray;
@property (retain, nonatomic) NSString *m_inputText;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<WCPayT2BCCandidateSugBarDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)reloadCandidateViewWithMatchResults:(id)a0 inputText:(id)a1;
- (void)restScrollView;
- (void)reloadCandidateView;
- (void)onClickCandidateView:(id)a0;
- (void).cxx_destruct;

@end
