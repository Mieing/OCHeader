@class UIScrollView, NSString, AWEMSearchAutoPlayController;

@interface AWEMSearchAutoPlayCalculator : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) AWEMSearchAutoPlayController *controller;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) id /* block */ visibleCardsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCanActive:(BOOL)a0;
- (void)didForceBecomeActive:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;

@end
