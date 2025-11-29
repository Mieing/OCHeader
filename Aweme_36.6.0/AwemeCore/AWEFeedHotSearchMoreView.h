@class UIView, NSString, NSArray, NSMutableDictionary, UIImageView, NSDictionary, AWEHotSpotMarqueeLabel, UILabel;
@protocol AWEFeedHotSearchMoreViewDelegate;

@interface AWEFeedHotSearchMoreView : UIView

@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UIImageView *hotSpotTitleImageView;
@property (retain, nonatomic) NSMutableDictionary *moreTitleViewDictionary;
@property (retain, nonatomic) UIView *switchHotSpotView;
@property (retain, nonatomic) UIImageView *switchHotSpotImageView;
@property (copy, nonatomic) NSArray *hotSearchWords;
@property (copy, nonatomic) NSArray *wordsArray;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImageView *animatedImageView;
@property (copy, nonatomic) NSArray *imgURLArr;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSString *preTrackCurrentWordContent;
@property (weak, nonatomic) id<AWEFeedHotSearchMoreViewDelegate> delegate;
@property (retain, nonatomic) AWEHotSpotMarqueeLabel *marqueeLabel;
@property (nonatomic) BOOL isNearbyStyle;
@property (copy, nonatomic) NSString *topTitleAccessContent;

- (void)configureUI;
- (void)trackClick;
- (void)setMarqueeText:(id)a0;
- (void)configureUIWithHotSearchWords:(id)a0;
- (id)initialTabModel;
- (void)updateMoreLabelContent:(id)a0;
- (void)configureAutoLayoutUI;
- (void)remakeContentAndAnimateLabelConstraints:(double)a0;
- (id)hotSpotTitleVerticalImage;
- (id)currentWordContent;
- (id)currentSentenceID;
- (id)boardTabModel;
- (id)enterHotSpotInnerWord;
- (void)onSwitchHotSpotViewClicked;
- (void)updateImageView:(id)a0 index:(long long)a1;
- (BOOL)currentHotSpotIsChallenge;
- (void)showLiveStyle;
- (void)updateBizType:(long long)a0 bizParams:(id)a1;
- (id)gradientLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldShowActionButton;

@end
