@class UIView;

@interface IESECYataCommonFitPhoneWidthView : UIView

@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) double scaleFactor;
@property (retain, nonatomic) UIView *contentView;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
