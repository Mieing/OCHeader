@class IESLivePopupItem, IESLiveCloseExplainCardView, UIImageView, HTSLiveInfoBoxMessage, UILabel, UIView, UIScrollView;
@protocol IESLiveDraggableCardViewDelegate;

@interface IESLiveDraggableCardView : UIView

@property (retain, nonatomic) UIView *explainView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL isOpened;
@property (nonatomic) struct CGSize { double width; double height; } normalCardSize;
@property (nonatomic) struct CGSize { double width; double height; } openedCardSize;
@property (nonatomic) double topMaxOffset;
@property (nonatomic) double bottomMaxOffset;
@property (nonatomic) double currentTopOffset;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) struct CGPoint { double x; double y; } gestureBeginPoint;
@property (retain, nonatomic) IESLiveCloseExplainCardView *closeExplainCardView;
@property (retain, nonatomic) HTSLiveInfoBoxMessage *infoBoxData;
@property (weak, nonatomic) id<IESLiveDraggableCardViewDelegate> delegate;

- (void)addGesture;
- (void)initViews;
- (void)dragViewMoved:(id)a0;
- (void)containerViewTapped;
- (id)initWithCardData:(id)a0 diContext:(id)a1;
- (void)refreshCardData:(id)a0;
- (void)handleContentScrollView;
- (void)handleViewExpandState;
- (void)handleTitle:(id)a0 completion:(id /* block */)a1;
- (double)calculateContentHeight:(id)a0 viewWidth:(double)a1;
- (void)calculateOffset;
- (void)remakeConstraint:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)handleCloseExplainCardView:(long long)a0;
- (void)longPressAction:(id)a0;
- (void).cxx_destruct;

@end
