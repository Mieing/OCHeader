@class UITapGestureRecognizer, UIImageView, TopicInfo, UILabel, UIButton;
@protocol GCChatCellPublishBottomViewDelegate;

@interface GCChatCellPublishBottomView : UIView

@property (retain, nonatomic) TopicInfo *topicInfo;
@property (nonatomic) double leftStartX;
@property (nonatomic) BOOL isSelfMsg;
@property (retain, nonatomic) UIButton *publishBtn;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<GCChatCellPublishBottomViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)publishAction;
- (void)onViewTaped;
- (void)configViewWithInfo:(id)a0 isSelfMsg:(BOOL)a1 leftStartX:(double)a2;
- (void)loadSelfMsgUIStyle;
- (void)loadOtherMsgUIStyle;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
