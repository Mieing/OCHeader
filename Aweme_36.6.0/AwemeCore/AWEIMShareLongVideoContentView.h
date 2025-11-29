@class UITapGestureRecognizer;

@interface AWEIMShareLongVideoContentView : AWEIMShareLongVideoCardView

@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)updateWithLongVideoInfo:(id)a0 coverURL:(id)a1;
- (id)tagBackgroudColorFromLVideoInfo:(id)a0;
- (id)tagTextColorFromLVideoInfo:(id)a0;
- (id)tagTextFromLVideoInfo:(id)a0;
- (void)p_didTapCover:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
