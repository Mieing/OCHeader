@class NSNumber, NSArray;

@interface AWEMusicDetailMusicCardViewConfig : NSObject

@property (nonatomic) unsigned long long cardStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) NSNumber *coverImageViewSize;
@property (nonatomic) double coverImageViewCornerRadius;
@property (nonatomic) double titleHeight;
@property (nonatomic) double titleTopInset;
@property (nonatomic) double coverTitleInset;
@property (nonatomic) double smallStyleButtonFontSize;
@property (nonatomic) double coverButtonInset;
@property (nonatomic) double largeStyleButtonHeight;
@property (nonatomic) double smallStyleButtonHeight;
@property (nonatomic) double largeStyleButtonCornerRadius;
@property (nonatomic) double smallStyleButtonCornerRadius;
@property (copy, nonatomic) NSArray *smallStyleSubtitleMutexArray;
@property (nonatomic) unsigned long long lunaBtnTextType;
@property (nonatomic) BOOL disableTopTipView;
@property (nonatomic) BOOL disableBottomBarView;
@property (nonatomic) BOOL disablePendentView;
@property (nonatomic) BOOL autoTrackLunaShow;
@property (nonatomic) double headerContainerTopMargin;
@property (nonatomic) BOOL hideCoverLeftTopIcon;
@property (nonatomic) BOOL useDarkLunaButton;
@property (nonatomic) BOOL moveLunaButtonToNavBar;

+ (id)musicDetailCardViewConfigWithStyle:(unsigned long long)a0;

- (BOOL)isVinylPlayerCardStyle;
- (BOOL)isVinylCardStyle;
- (void).cxx_destruct;
- (id)init;

@end
