@class UIImageView, IESECCommentIconActionModel, IESECHighlightButton, IESECGradientView, UILabel, UIView, IESECUIImageView;
@protocol IESECCommentNoticeDelegate;

@interface IESECCommentNoticeView : IESECGradientView

@property (retain, nonatomic) IESECUIImageView *noticeImageView;
@property (retain, nonatomic) UILabel *noticeStringLabel;
@property (retain, nonatomic) IESECUIImageView *noticeBehindImageView;
@property (retain, nonatomic) IESECGradientView *leftGradientView;
@property (retain, nonatomic) IESECGradientView *rightGradientView;
@property (retain, nonatomic) UIView *sortAreaView;
@property (retain, nonatomic) IESECHighlightButton *complexCommentsButton;
@property (retain, nonatomic) IESECHighlightButton *lastedCommentsButton;
@property (retain, nonatomic) UIImageView *verticalLineView;
@property (retain, nonatomic) IESECCommentIconActionModel *iconAction;
@property (weak, nonatomic) id<IESECCommentNoticeDelegate> delegate;
@property (nonatomic) BOOL isSortByTime;
@property (nonatomic) BOOL ifRequestMixComment;

- (void)updateNoticeText:(id)a0 iconAction:(id)a1;
- (void)updateSortedStatus:(BOOL)a0;
- (void)updateSimilarNoticeText:(id)a0;
- (void)updateSimilarNoticeConstraint;
- (void)noticeBehindImageViewDidTap:(id)a0;
- (void)tapComplexCommentsButton;
- (void)tapLastedCommentsButton;
- (void)updateSimilarNoticeConstraintInSliceScene;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
