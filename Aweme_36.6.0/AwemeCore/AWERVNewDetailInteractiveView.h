@class UIStackView, AWEFeedDetailCardCellInteractionViewLayout, NSString, AWEAwemeModel, AWERVNewDetailActionButton;

@interface AWERVNewDetailInteractiveView : UIView <AWERVNewDetailInteractiveViewProtocol>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWERVNewDetailActionButton *likeButton;
@property (retain, nonatomic) AWERVNewDetailActionButton *commentButton;
@property (retain, nonatomic) AWERVNewDetailActionButton *collectBtn;
@property (retain, nonatomic) AWERVNewDetailActionButton *shareButton;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedDetailCardCellInteractionViewLayout *layoutConfig;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;
@property (copy, nonatomic) id /* block */ collectBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCommentCount;
- (void)updateDiggCount;
- (void)updateShareCount;
- (void)updateCollectionCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutConfig:(id)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
