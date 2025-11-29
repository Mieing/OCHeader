@class NSString, UIImageView, AWEAwemeModel, UILabel, NSMutableArray;
@protocol AWEGeneralWaterfallEcomAnchorProtocol;

@interface AWEGeneralWaterfallEcomAnchor : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSMutableArray *priceLabelArray;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isForceLight;
@property (weak, nonatomic) id<AWEGeneralWaterfallEcomAnchorProtocol> delegate;
@property (copy, nonatomic) NSString *referString;

- (id)anchorNormalInfo;
- (void)didStartShowing;
- (id)commonTrackDict;
- (void)trackProductEntranceShow;
- (id)firstLineLabel;
- (void)cardSingleTapped:(id)a0;
- (id)initWithModel:(id)a0 isForceLight:(BOOL)a1;
- (void)trackProductShow;
- (id)baselineLabelArray;
- (id)newLabelWithLabelComponent:(id)a0;
- (id)saleContentComponent;
- (BOOL)isInDarkTheme;
- (id)jumpInnerExtraDict;
- (void)trackJumpInner;
- (void)enterProductDetailsPage;
- (void)trackEnterProductDetail;
- (void).cxx_destruct;
- (void)updateUI;
- (void)updateWithModel:(id)a0;
- (void)setUpUI;

@end
