@class UIFont, UIView, NSArray, NSString, PAGView, UIImageView, CALayer, NSMutableArray;

@interface WCFinderProfileHeaderMusicInfoView : UIView <PAGViewListener>

@property (nonatomic) double itemPadding;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long itemHash;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) NSMutableArray *contents;
@property (retain, nonatomic) NSMutableArray *contentSizeArr;
@property (nonatomic) BOOL alreadyAnimation;
@property (retain, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFont:(id)a0 itemPadding:(double)a1;
- (void)setupPAGView;
- (void)setupBGView:(id)a0;
- (void)startAnimation;
- (void)displayNoremalContent;
- (struct CGSize { double x0; double x1; })calContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onAnimationEnd:(id)a0;
- (void).cxx_destruct;

@end
