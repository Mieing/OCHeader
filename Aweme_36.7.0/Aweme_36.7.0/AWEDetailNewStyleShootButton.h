@class UIColor, AWEScrollStringLabel, UIImageView, NSString;

@interface AWEDetailNewStyleShootButton : UIButton

@property (retain, nonatomic) AWEScrollStringLabel *longTitle;
@property (retain, nonatomic) UIImageView *stickerImage;
@property (copy, nonatomic) NSString *configedShootName;
@property (retain, nonatomic) UIColor *configedBackgroundColor;

- (void)drawWithTitle:(id)a0 icon:(id)a1 contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 useWhiteStyle:(BOOL)a3;
- (void)drawWithTitle:(id)a0 icon:(id)a1 contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 useWhiteStyle:(BOOL)a3 cornerRadius:(double)a4;
- (void)useHashtagJoinStyle;
- (void)drawPreparedStyle:(long long)a0;
- (void)drawWithTitle:(id)a0 buttonConfig:(id)a1 cornerRadius:(double)a2;
- (void)drawUseImageAndTitleStyleWithTitle:(id)a0 buttonConfig:(id)a1 cornerRadius:(double)a2;
- (void)useDefaultShootSameStyle;
- (void)useSocialCameraShootStyle;
- (void)useHashtagLivePlayStyle;
- (void)useWelfareShootStyle;
- (void)useImageShootSameStyle;
- (void)useDuetShootStyle;
- (void)useFollowShootStyle;
- (void)useSchoolStoryStyleWithTitle:(id)a0;
- (void)useNewSchoolStoryStyleWithTitle:(id)a0 iconName:(id)a1 whiteStyle:(BOOL)a2;
- (void)useMusicStoryStyleWithTitle:(id)a0 icon:(id)a1;
- (void)useVideoCutTemplateStyleWithTitle:(id)a0 icon:(id)a1;
- (void)useTemplateNewStyleWithTitle:(id)a0 icon:(id)a1;
- (void)drawWithTitle:(id)a0 cornerRadius:(double)a1;
- (void)showShadow;
- (void)useSimplifiedMusicStoryStyleWithTitle:(id)a0 icon:(id)a1;
- (void)useNewSimplifiedMusicStoryStyleWithTitle:(id)a0 icon:(id)a1;
- (void)useMusicDetailCompactShootSameStyle;
- (void)useMusicDetailCompactSocialCameraShootSameStyle;
- (void)useNewMusicDetailCompactSocialCameraShootSameStyle;
- (void)useAIShootSameStyle;
- (void)useNewImageShootSameStyle;
- (void)useTrendShootSameStyle;
- (void)useNewTrendShootSameStyle;
- (void)useUnifyToCameraStyle;
- (void)useUnifyToAlbumStyle;
- (void)useUnifySameStyle;
- (void)useNewUnifySameStyle;
- (void)useInspirationShootSameStyleWithTitle:(id)a0 icon:(id)a1;
- (void)useInspirationStartNewQuickFlashStyleWithTitle:(id)a0 icon:(id)a1;
- (void)useAnnualMemoriesStyleWithTitle:(id)a0 icon:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
