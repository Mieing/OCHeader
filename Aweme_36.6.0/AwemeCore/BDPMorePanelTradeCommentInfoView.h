@class BDPTradeCommentModel, UIControl, UILabel, BDPUniqueID;

@interface BDPMorePanelTradeCommentInfoView : UIView

@property (nonatomic) BOOL hasReportedShowEvent;
@property (retain, nonatomic) BDPTradeCommentModel *model;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *detailLabelRow1;
@property (retain, nonatomic) UIControl *touchControl;
@property (copy, nonatomic) id /* block */ onClick;

- (void)onDetailTapped;
- (void)trackCommentViewShow;
- (void)trackCommentViewClick:(id)a0;
- (void)onCommentContentTapped;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;
- (void)updateWithModel:(id)a0;
- (void)setUpUI;

@end
