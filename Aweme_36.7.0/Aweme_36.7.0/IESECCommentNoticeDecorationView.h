@class IESECCommentNoticeView, UIView;

@interface IESECCommentNoticeDecorationView : UICollectionReusableView

@property (retain, nonatomic) UIView *spaceView;
@property (retain, nonatomic) IESECCommentNoticeView *similarNoticeView;
@property (retain, nonatomic) IESECCommentNoticeView *noticeView;
@property (nonatomic) BOOL mediaMode;

- (void)updateNoticeText:(id)a0 iconAction:(id)a1;
- (void)updateSimilarNoticeText:(id)a0;
- (void)updateNoticeText:(id)a0;
- (void)updateOnlySimilarStyle:(id)a0 logoString:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)setupUI;

@end
