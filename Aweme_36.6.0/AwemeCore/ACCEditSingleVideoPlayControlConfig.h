@class UIColor, NSString, UIView, NSNumber;

@interface ACCEditSingleVideoPlayControlConfig : NSObject

@property (retain, nonatomic) UIColor *minimumTrackColor;
@property (retain, nonatomic) UIColor *maximumTrackColor;
@property (nonatomic) double progressBarNormalHeight;
@property (nonatomic) double progressBarUnderHeight;
@property (copy, nonatomic) NSNumber *progressBarUnderHeightValue;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standPlayerFrame;
@property (retain, nonatomic) NSNumber *progressSliderHorizontalInset;
@property (retain, nonatomic) NSNumber *progressLabelBottomOffset;
@property (retain, nonatomic) NSNumber *progressLabelFontSize;
@property (nonatomic) double pauseButtonRight;
@property (nonatomic) double pauseButtonBottom;
@property (nonatomic) double pauseButtonWH;
@property (copy, nonatomic) NSString *pauseButtonPauseIcon;
@property (copy, nonatomic) NSString *pauseButtonPlayIcon;
@property (retain, nonatomic) UIView *pauseButtonBGView;
@property (nonatomic) BOOL hiddenThumbImage;

- (void).cxx_destruct;

@end
