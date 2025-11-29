@class UILabel, NLETrackSlot_OC;

@interface ACCAdvanceEditMainTrackLongPressItem : UIImageView

@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (nonatomic) BOOL enableTimeLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 slot:(id)a1 enableTimeLable:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
