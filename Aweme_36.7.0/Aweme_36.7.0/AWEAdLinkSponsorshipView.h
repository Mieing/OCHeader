@class NSString, AWEAdLinkModel, UIButton;

@interface AWEAdLinkSponsorshipView : AWEMarkView

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEAdLinkModel *linkModel;
@property (nonatomic) BOOL isClosedByUser;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL disableAdTrack;
@property (retain, nonatomic) UIButton *closeButton;

+ (double)titleHeightOfLinkModel:(id)a0;
+ (double)viewHeightWithLinkModel:(id)a0 titleHeight:(double *)a1;

- (void)closeBtnTapped:(id)a0;
- (void)setupCloseButtonIfNeeded;
- (void)setupNormalStyle;
- (void)setupWeakStyle;
- (void)setupStrongStyle;
- (void)setupSpecialStyle;
- (void)layoutCloseButton;
- (void)configWithLinkModel:(id)a0 itemID:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
