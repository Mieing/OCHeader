@class UILabel, UIImageView, NSString;

@interface AWENearbyGrouponCitySelectView : UIView <AWESearchNearbyEntranceLeftSubViewProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (nonatomic) long long pageType;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0 pageType:(long long)a1 style:(long long)a2;
- (double)widthThatFits;
- (void)updateSelectViewColor:(id)a0;
- (void)setupUIWithText:(id)a0;
- (double)largeModeSizeWithFont:(double)a0;
- (double)getMaxLabelWidth;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateText:(id)a0;

@end
