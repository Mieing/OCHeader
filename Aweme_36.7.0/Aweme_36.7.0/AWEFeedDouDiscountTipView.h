@class AWEAwemeModel, NSString, NSArray, UIView, AWEStandardClassifyBarModel, UIImageView, NSMutableDictionary, NSDictionary, UILabel;

@interface AWEFeedDouDiscountTipView : UIView

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEStandardClassifyBarModel *barModel;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UIImageView *douDiscountImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) NSString *vvTotalText;
@property (copy, nonatomic) NSString *transExtra;
@property (copy, nonatomic) NSArray *innerPageBottomIconUrlList;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (nonatomic) double showTimeInterval;
@property (nonatomic) BOOL hasEverClicked;
@property (copy, nonatomic) NSString *experimentInfo;
@property (nonatomic) BOOL feedPopUp;
@property (retain, nonatomic) NSDictionary *douDiscountPOICardConf;
@property (nonatomic) double playbackTime;

+ (id)phaseRankType:(long long)a0;
+ (BOOL)shouldShowWithModel:(id)a0;
+ (id)feedDiscountBarLogExtraInfo:(id)a0;

- (void)configureWithModel:(id)a0 referString:(id)a1;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (BOOL)isPOIRank;
- (BOOL)p_showldShowVVTotalText;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willShow;
- (void)didTap;

@end
