@class UIColor, NSString, MMLiveKtvThemeResource, NSArray;

@interface MMLiveKtvThemeItem : NSObject

@property (retain, nonatomic) NSString *themeId;
@property (retain, nonatomic) NSString *previewThumbnailUri;
@property (retain, nonatomic) UIColor *colorA;
@property (retain, nonatomic) UIColor *colorB;
@property (retain, nonatomic) MMLiveKtvThemeResource *ambientAnimation;
@property (retain, nonatomic) MMLiveKtvThemeResource *ambientAnimationFallbackImage;
@property (retain, nonatomic) MMLiveKtvThemeResource *bottomButtonIcon;
@property (retain, nonatomic) MMLiveKtvThemeResource *centerIcon;
@property (retain, nonatomic) MMLiveKtvThemeResource *goodAnimation;
@property (retain, nonatomic) MMLiveKtvThemeResource *perfectAnimation;
@property (retain, nonatomic) NSArray *allResources;

+ (id)themeItemWithResource:(id)a0;

- (id)createResourcesPinningToken;
- (void).cxx_destruct;

@end
