@class NSString, AWEStoryFontModel, UIView, AWEInteractionStickerModel;
@protocol AWEPollStickerViewProtocol, ACCStickerContainerProtocol;

@interface ACCPollStickerView : UIView <UITextViewDelegate, ACCStickerEditContentProtocol, ACCPollStickerViewProtocol>

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } lastTransForm;
@property (nonatomic) struct CGPoint { double x; double y; } lastAnchorPoint;
@property (nonatomic) BOOL enableEdit;
@property (nonatomic) double currentScale;
@property (nonatomic) struct CGPoint { double x; double y; } editCenter;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) AWEStoryFontModel *selectFont;
@property (retain, nonatomic) AWEInteractionStickerModel *model;
@property (copy, nonatomic) NSString *effectIdentifier;
@property (retain, nonatomic) UIView<AWEPollStickerViewProtocol> *stickerView;
@property (nonatomic) struct CGPoint { double x; double y; } basicCenter;
@property (nonatomic) struct CGPoint { double x; double y; } lastCenter;
@property (nonatomic) double leftBeyond;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL isDraftRecover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;

- (void)contentDidUpdateToScale:(double)a0;
- (id)copyForContext:(id)a0;
- (void)updateWithInstance:(id)a0 context:(id)a1;
- (void)resetTextViewAlignment;
- (id)initWithStickerModel:(id)a0;
- (void)resetWithSuperView:(id)a0;
- (void)transToRecordPosWithSuperView:(id)a0 completion:(id /* block */)a1;
- (void)updateEditTypeWithTap:(id)a0;
- (void)refreshFont;
- (void)layoutStickerView;
- (void)p_updateFrameWhenQuestionEmpty;
- (void)transToRecordPosWithSuperView:(id)a0 animationDuration:(double)a1 completion:(id /* block */)a2;
- (void)reLayoutStickerView;
- (struct CGSize { double x0; double x1; })sizeOfString:(id)a0 constrainedToWidth:(double)a1 font:(id)a2;
- (void)doAfterChange;
- (void)selectOption:(id)a0 voteInfo:(id)a1 completion:(id /* block */)a2;
- (id)tappedVoteInfoForTappedPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)p_updateFrame;

@end
