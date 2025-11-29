@class UIImageView, HTSLiveMessageListNode, UIView, UILabel, IESLiveTagView;

@interface LiveMessageListPinnedAnnouncementView : UIView

@property (retain, nonatomic) HTSLiveMessageListNode *node;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) IESLiveTagView *subscribeView;

- (void)refreshWith:(id)a0;
- (void)updateSubscribeView;
- (void)subscribeViewDidTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
