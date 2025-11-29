@class UIImageView, AWEECOMIMChatSerachListHistorySerachModel, UILabel, UIView;

@interface AWEECOMIMChatSerachListHistorySerachView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *itemsBkgView;
@property (retain, nonatomic) UIImageView *deleteView;
@property (retain, nonatomic) UIImageView *moreView;
@property (retain, nonatomic) UIImageView *foldView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *upView;
@property (retain, nonatomic) AWEECOMIMChatSerachListHistorySerachModel *historySerachModel;
@property (nonatomic) BOOL shouldShowExpand;
@property (nonatomic) BOOL shouldShowDelete;
@property (retain, nonatomic) UILabel *allDeleteLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *doneLabel;
@property (copy, nonatomic) id /* block */ historyClickBlock;
@property (copy, nonatomic) id /* block */ historyClickDeleteBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ clickMoreBlock;
@property (copy, nonatomic) id /* block */ deleteAllBlock;

+ (double)itemWidthWithItemStr:(id)a0 shouldShowDelete:(BOOL)a1;
+ (double)totalHeightWithModel:(id)a0 shouldShowExpand:(BOOL)a1 shouldShowDelete:(BOOL)a2;
+ (double)itemHeight;

- (id)generateHistorySerachLabel;
- (void)btnSelected:(id)a0;
- (void)onClickMore;
- (void)onClickFlod;
- (void)onClickDeleteIcon;
- (void)onClickDelete;
- (void)onClickDone;
- (void)configHistorySerachViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
