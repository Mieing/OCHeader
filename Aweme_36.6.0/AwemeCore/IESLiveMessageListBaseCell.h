@class NSString, IESLiveMessageLabel, UIImageView, HTSLiveMessageListNode;
@protocol IESLiveMessageListCellViewDelegate;

@interface IESLiveMessageListBaseCell : UITableViewCell <IESLiveMessageListCellTapTextProtocol>

@property (retain, nonatomic) HTSLiveMessageListNode *node;
@property (retain, nonatomic) IESLiveMessageLabel *messageTextLabel;
@property (nonatomic) BOOL needBlockCurrentHighlightRecover;
@property (nonatomic) BOOL enableHighlightOpt;
@property (weak, nonatomic) id<IESLiveMessageListCellViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL enableTouchOpt;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWith:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertTextViewRectToCell:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needLoadMessageTextLabel;
- (BOOL)onlyUseMessageTextLabel;
- (void)longPress:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;
- (void)singleTap:(id)a0;

@end
