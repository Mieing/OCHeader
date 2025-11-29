@class IESLiveDressVisitorInfo, NSString, UILabel, IESLiveUserCardStore;

@interface IESLiveUserCardSkinVisit : UIView

@property (retain, nonatomic) IESLiveDressVisitorInfo *dressVisitorInfo;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UILabel *upLabel;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) NSString *entranceType;

- (void)addGesture;
- (BOOL)shouldShowYellowDot;
- (void)usercardOpenFinished;
- (id)initWithUserCardStore:(id)a0;
- (void)doTap;
- (void)setupWithLock;
- (void)setupText:(id)a0 withNumberText:(id)a1;
- (id)intergetToString:(long long)a0;
- (void)setupTextAnimationWithIncrease:(long long)a0 withNormalVisit:(long long)a1;
- (void)setupYellowDot;
- (void)startAnimation:(id)a0 withView:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (void)trackWithName:(id)a0;

@end
