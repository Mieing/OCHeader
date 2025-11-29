@class NSString, WCFinderRichTextView, MMUIButton, UIView;
@protocol WCFinderCommentListSelectTabViewDelegate;

@interface WCFinderCommentListSelectTabView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) MMUIButton *commentButton;
@property (retain, nonatomic) MMUIButton *shopCommentButton;
@property (weak, nonatomic) MMUIButton *selectedButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) WCFinderRichTextView *rightLinkView;
@property (retain, nonatomic) UIView *rightContainerView;
@property (nonatomic) BOOL isDownDirection;
@property (retain, nonatomic) NSString *linkText;
@property (nonatomic) double lastWidth;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (copy, nonatomic) id /* block */ willUnSelectBlock;
@property (readonly, nonatomic) unsigned long long selectedType;
@property (copy, nonatomic) id /* block */ shopReportDictBlock;
@property (weak, nonatomic) id<WCFinderCommentListSelectTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupRightLinkView;
- (BOOL)hasDisplayRightLink;
- (void)changeCommentBtnImageDirection:(BOOL)a0;
- (void)clickButtonAction:(id)a0;
- (void)reloadLayout;
- (void)updateCommentStr:(id)a0 shopCommentStr:(id)a1 linkText:(id)a2 showArrow:(BOOL)a3;
- (void)_doLayout;
- (void)layoutSubviews;
- (void)updateRightContainerLayout;
- (void)updateRightBarView:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
