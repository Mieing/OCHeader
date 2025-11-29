@class IESECCommentRightInteractorView, NSString, IESECCommentDetailTextView, IESECCommentMediaStatusBarView, IESECCommentDetailModel;
@protocol IESECCommentMediaInteractorViewDelegate;

@interface IESECCommentMediaInteractorView : UIView <IESECCommentMediaStatusBarDelegate, IESECCommentDetailTextViewDelegate>

@property (retain, nonatomic) IESECCommentMediaStatusBarView *statusView;
@property (retain, nonatomic) IESECCommentDetailTextView *textView;
@property (retain, nonatomic) IESECCommentRightInteractorView *rightInteractorView;
@property (nonatomic) BOOL shouldHideMultiplyButton;
@property (nonatomic) unsigned long long enterFrom;
@property (weak, nonatomic) id<IESECCommentMediaInteractorViewDelegate> delegate;
@property (retain, nonatomic) IESECCommentDetailModel *comment;
@property (copy, nonatomic) id /* block */ clickLikeButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressIsSliding:(BOOL)a0;
- (void)textViewFoldingButtonStateChanged:(id)a0;
- (void)didUpdateTextContentHeight:(double)a0;
- (void)setupClickBlock;
- (void)updateDataWithItemModel:(id)a0 length:(long long)a1;
- (void)pushMultypleMedias:(id)a0;
- (void)dismiss:(long long)a0 isCurrentVideoTab:(BOOL)a1;
- (id)initWithModel:(id)a0 length:(long long)a1 shouldHideMultiplyButton:(BOOL)a2 enterFrom:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupSubviews;

@end
