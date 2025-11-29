@class UIColor, NSArray, UIImage, NSNumber;

@interface IESLiveFeedAudioStageViewExtraModel : NSObject

@property (retain, nonatomic) UIColor *statusBarBgColor;
@property (retain, nonatomic) UIColor *contentBgColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) NSArray *linkerPlayModesArray;
@property (nonatomic) long long ktvStageMode;
@property (retain, nonatomic) NSNumber *interactiveEnabled;
@property (retain, nonatomic) UIImage *normalStagePlaceholderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoVisibleRect;

- (void).cxx_destruct;

@end
