@class UILabel, AWEDoubleColumnSearchMerchandiseFilterComponentModel;

@interface AWESearchPOICalendarEditComponentCell : AWEMerchandiseComponentBaseCell

@property (retain, nonatomic) UILabel *startHintLabel;
@property (retain, nonatomic) UILabel *endHintLabel;
@property (retain, nonatomic) UILabel *startDateLabel;
@property (retain, nonatomic) UILabel *endDateLabel;
@property (nonatomic) BOOL shouldDisplayDate;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *componentModel;

+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)configDisplayUIForDefaultStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectedStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectingStyleWithModel:(id)a0;
- (double)hintTextWidthForText:(id)a0;
- (void)configShouldDisplayDate:(BOOL)a0;
- (void)configCalendarStyleWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
