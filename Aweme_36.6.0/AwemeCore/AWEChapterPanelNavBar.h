@class AWEChapterContext, NSDictionary, UILabel, UIView, UIButton;

@interface AWEChapterPanelNavBar : UIView

@property (retain, nonatomic) UIView *closeButton;
@property (retain, nonatomic) UILabel *aiStatement;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *leftCloseButton;
@property (copy, nonatomic) id /* block */ tapAiStatementBlock;
@property (copy, nonatomic) id /* block */ closeAction;
@property (retain, nonatomic) AWEChapterContext *context;
@property (retain, nonatomic) NSDictionary *trackParams;

- (void)configSubViews;
- (void)updateWithChapterList:(id)a0;
- (void)updateAiStatement:(BOOL)a0 ifNeededShow:(BOOL)a1;
- (void)updateAiStatement:(long long)a0 chapterRecommendApplyType:(long long)a1;
- (void)updateAiStatementIFChapterReviewFailed;
- (void)configBar;
- (void)refreshLayoutWithConfig:(id)a0;
- (void)tapAiStatementAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTitle:(id)a0;

@end
