@class DitoPageContext, UIImageView, UILabel, UIView;
@protocol AWEPOIDetailTableViewLocationCellDelegate;

@interface AWEPOIDetailTableViewLocationCell : AWEPOIDetailTableViewCell

@property (retain, nonatomic) UIImageView *mapIcon;
@property (retain, nonatomic) UIImageView *navigateIcon;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (nonatomic) BOOL hasPhoneNumber;
@property (nonatomic) BOOL hasCompanyPage;
@property (nonatomic) BOOL hasDistance;
@property (retain, nonatomic) UIView *callAreaContainerView;
@property (retain, nonatomic) UIImageView *callIcon;
@property (retain, nonatomic) UIView *callAreaSeparator;
@property (retain, nonatomic) UIView *companyAreaContainerView;
@property (retain, nonatomic) UIImageView *companyIcon;
@property (retain, nonatomic) UIView *companyAreaSeparator;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<AWEPOIDetailTableViewLocationCellDelegate> delegate;

+ (double)cellHeightForLocation:(id)a0 distance:(id)a1 hasPhoneNumber:(BOOL)a2 hasCompanyPage:(BOOL)a3;
+ (id)attributedLocationTextForAddress:(id)a0 distance:(id)a1 hasPhoneNumber:(BOOL)a2 hasCompanyPage:(BOOL)a3;
+ (double)locationLabelWidthForInfoWithPhoneNumber:(BOOL)a0 withCompanyPage:(BOOL)a1;

- (void)p_updateConstraints;
- (void)selfLongTap:(id)a0;
- (void)p_setupLocationLabel;
- (void)p_setupMapIcon;
- (void)p_setupDistanceLabel;
- (void)p_setupCallArea;
- (void)p_setupCompanyArea;
- (double)p_mapIconOffset;
- (void)handleTapOnCallArea:(id)a0;
- (BOOL)p_needSetAreaSeparator;
- (void)handleTapOnCompanyArea:(id)a0;
- (void)setAddress:(id)a0 distance:(id)a1;
- (void)handleTapOnNavigate:(id)a0;
- (void)hideContentViews;
- (void)setDistance:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)setLocation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
