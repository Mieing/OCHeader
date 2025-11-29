@class FinderJumpInfo_Style, MMTimer, NSString, UIView, WCFinderJumpInfo;
@protocol WCFinderJumpInfoCombinationViewDelegate;

@interface WCFinderJumpInfoCombinationView : UIView <WCFinderJumpInfoViewProtocol>

@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderJumpInfo_Style *style;
@property (nonatomic) int showPosition;
@property (nonatomic) unsigned long long displayStyleIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (retain, nonatomic) UIView *lastStyleView;
@property (nonatomic) double maxTextAreaWidth;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) MMTimer *timer;
@property (weak, nonatomic) id<WCFinderJumpInfoCombinationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)currentDisplayStyle;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)prepareForAnimationToStyleWithIndex:(unsigned long long)a0;
- (void)changeToJumpInfoWithIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)changeToShow:(BOOL)a0;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (id)displayJumpInfoStyleWithIndex:(unsigned long long)a0;
- (void)updateUIInfoWithStyle:(id)a0 animated:(BOOL)a1;
- (void)layoutUI;
- (void)notifyToShow;
- (void)startNextStyleTimer;
- (void)notifyToNextStyle;
- (void)onActionButtonDidClick;
- (void).cxx_destruct;

@end
