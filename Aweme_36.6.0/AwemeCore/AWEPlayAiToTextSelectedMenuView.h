@class NSMutableArray;
@protocol AWEPlayAiToTextSelectedMenuViewDelegate;

@interface AWEPlayAiToTextSelectedMenuView : UIView

@property (weak, nonatomic) id<AWEPlayAiToTextSelectedMenuViewDelegate> delagate;
@property (retain, nonatomic) NSMutableArray *buttonArray;

- (void)playBtnDidClick;
- (void)copyBtnDidClick;
- (void)searchBtnDidClick;
- (void)repostBtnDidClick;
- (void).cxx_destruct;
- (id)init;
- (void)setUpUI;

@end
