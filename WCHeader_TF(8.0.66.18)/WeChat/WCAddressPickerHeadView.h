@class MMLocatingCoordinateLogic, MMUIActivityIndicatorView, NSString, UILabel, UIView, MMUIButton;
@protocol WCAddressHeadViewDelegate;

@interface WCAddressPickerHeadView : UIView {
    id<WCAddressHeadViewDelegate> m_delegate;
    int m_maxStageComponent;
    unsigned long long _geoTag;
    NSString *province;
    NSString *city;
    NSString *district;
    NSString *street;
    NSString *detail;
}

@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)setHeaderDelegate:(id)a0;
- (void)setMaxStageComponent:(int)a0;
- (void)startLocating;
- (BOOL)hasLocation;
- (void)onClickRightButton;
- (void)updateWithLocation;
- (void)updateWithLocatingError;
- (void).cxx_destruct;

@end
