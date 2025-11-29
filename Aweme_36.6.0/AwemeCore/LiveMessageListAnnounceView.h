@class UILabel, MASConstraint, HTSLiveMessageListNode;

@interface LiveMessageListAnnounceView : UIView

@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HTSLiveMessageListNode *node;
@property (retain, nonatomic) MASConstraint *contentLabelBottomConstraint;

+ (double)heightForNode:(id)a0;

- (void)refreshWith:(id)a0;
- (void)attachTipsView;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
