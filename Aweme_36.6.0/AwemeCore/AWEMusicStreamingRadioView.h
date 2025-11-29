@class UIColor, UILabel, AWEMusicRadioBox, UIButton;

@interface AWEMusicStreamingRadioView : UIView

@property (nonatomic) BOOL needAdaptBigFont;
@property (retain, nonatomic) AWEMusicRadioBox *radioBox;
@property (retain, nonatomic) UIColor *boxBorderColor;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *btn;
@property (nonatomic) double space;
@property (copy, nonatomic) id /* block */ selectChangedBlock;

- (id)initWithBoxBorderColor:(id)a0 needAdaptBigFont:(BOOL)a1;
- (void)tappedAction:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
