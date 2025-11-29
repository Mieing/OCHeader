@class UIColor, UIImage;

@interface IESLiveVoicePanelButtonConfig : NSObject

@property (nonatomic) float animationDuration;
@property (nonatomic) float scale;
@property (nonatomic) float backgroundSize;
@property (nonatomic) float iconSize;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIImage *normalIcon;
@property (retain, nonatomic) UIImage *highlightIcon;
@property (retain, nonatomic) UIImage *normalBackground;
@property (retain, nonatomic) UIImage *highlightBackground;
@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) BOOL highlighted;

- (void).cxx_destruct;
- (id)init;

@end
