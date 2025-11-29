@class UIStackView, UIView, UIImageView, IESECRelationFeedCommentViewModel, IESECGCDTimer, IESECInnerFlowProductComment, YYLabel, UILabel;
@protocol IESECRelationFeedCommentViewDataSource;

@interface IESECRelationFeedCommentView : UIView <IESECLLComponent> {
    IESECInnerFlowProductComment *_commentInfo;
    IESECGCDTimer *_repeatRollTimer;
    IESECRelationFeedCommentViewModel *_commentsModel;
    YYLabel *_secondCommentLabel;
    id<IESECRelationFeedCommentViewDataSource> _model;
}

@property (retain, nonatomic) UIStackView *iconsStackView;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *commentBack;
@property (retain, nonatomic) YYLabel *commentLabel;
@property (retain, nonatomic) UILabel *totalLabel;
@property (retain, nonatomic) UIImageView *arrow;

+ (id /* block */)commentWithWidth:(double)a0;

- (void)clickAction;
- (void)updateUIWithModel:(id)a0;
- (void)__setupViews;
- (id)__IconImageView:(id)a0;
- (void)configCommentWithLabel:(id)a0 comment:(id)a1;
- (void)startRepeatRollComment;
- (void)configSecondComment;
- (void)rollingCommentAction;
- (id)productionCommentLabel;
- (void)stopRepeatRollComment;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithInfo:(id)a0;

@end
