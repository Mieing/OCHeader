@class UIColor, NSString, UIFont, UIImage, AWEIMStreakFlameViewAnimateV2Config, NSAttributedString;

@interface IESIMStreakFlameViewConfig : NSObject

@property (copy, nonatomic) NSString *streakText;
@property (copy, nonatomic) NSAttributedString *streakAttributedText;
@property (retain, nonatomic) UIColor *streakTextColor;
@property (retain, nonatomic) UIFont *streakTextFont;
@property (copy, nonatomic) NSString *streakIconURL;
@property (retain, nonatomic) UIImage *streakIconImage;
@property (retain, nonatomic) UIImage *streakDefaultIconImage;
@property (nonatomic) double streakIconHeight;
@property (nonatomic) BOOL animatedWhenUpdateIconImage;
@property (nonatomic) BOOL animatedWhenUpdateTextLabel;
@property (nonatomic) BOOL disableFetchImageFromNetwork;
@property (retain, nonatomic) AWEIMStreakFlameViewAnimateV2Config *animateV2Config;
@property (nonatomic) BOOL needLabelBackgroundView;
@property (retain, nonatomic) UIColor *labelBackgroundViewColor;
@property (nonatomic) BOOL needBackgroundViewTotalRadius;
@property (nonatomic) double distanceBetweenIconAndLabel;
@property (nonatomic) double backgroundViewPadding;
@property (nonatomic) BOOL hideLabelView;
@property (nonatomic) unsigned long long streakScene;

- (void).cxx_destruct;

@end
