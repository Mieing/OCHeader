@class MMFinderLiveOlyBarragePubbleTravel, NSString, UIImageView, UIView, RichTextView, MMFinderLiveBarragePubbleCellFrame;

@interface MMFinderLiveOlyBarragePubbleCell : UIView <CAAnimationDelegate>

@property (nonatomic) long long uiStyle;
@property (nonatomic) long long currTheme;
@property (retain, nonatomic) MMFinderLiveBarragePubbleCellFrame *cellFrame;
@property (retain, nonatomic) UIView *pubbleBackView;
@property (retain, nonatomic) RichTextView *contentLabel;
@property (retain, nonatomic) UIImageView *starIconView;
@property (retain, nonatomic) MMFinderLiveOlyBarragePubbleTravel *barrageTravel;
@property (copy, nonatomic) id /* block */ tapCallback;
@property (copy, nonatomic) id /* block */ prepareForReuseCallback;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCellFrame:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPubbleBackView;
- (void)layoutStarIconView;
- (void)layoutContentLabel;
- (void)updateStarIconViewOrigin;
- (void)updateContentLabelOrigin;
- (id)starIconImage;
- (id)contentColor;
- (void)resetCellFrame:(id)a0;
- (void)updateCellFrame:(id)a0;
- (void)updatePubbleStyle:(long long)a0;
- (void)updateTheme:(long long)a0;
- (void)configBarragePubbleTravel:(id)a0 withContainerView:(id)a1;
- (void)displayFinish;
- (void)display;
- (int)getCurrentCellFrameLayoutStyle;
- (void)addGestures;
- (void)onBarragePubbleTap:(id)a0;
- (void).cxx_destruct;

@end
