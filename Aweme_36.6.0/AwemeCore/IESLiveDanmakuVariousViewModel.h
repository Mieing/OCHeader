@class NSArray, NSString, UIImage, HTSLiveImage, NSAttributedString;

@interface IESLiveDanmakuVariousViewModel : NSObject <IESLiveDanmakuViewModelProtocol>

@property (copy, nonatomic) NSArray *avatarURLs;
@property (retain, nonatomic) UIImage *avatarImage;
@property (nonatomic) BOOL showAvatar;
@property (nonatomic) double avatarLeadingOffset;
@property (nonatomic) double officialAvatarSize;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (nonatomic) double avatarBadgeSize;
@property (nonatomic) BOOL showAvatarBadge;
@property (retain, nonatomic) HTSLiveImage *avatarBadge;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (retain, nonatomic) UIImage *backgroundSkin;
@property (nonatomic) BOOL showContentBorder;
@property (copy, nonatomic) NSArray *borderColors;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSArray *contentTextColors;
@property (copy, nonatomic) NSArray *contentOuterStrokeColors;
@property (nonatomic) double outerStrokeWidth;
@property (nonatomic) double horizontalSpacing;
@property (retain, nonatomic) HTSLiveImage *badgeIcon;
@property (nonatomic) long long atmosphereCols;
@property (retain, nonatomic) NSAttributedString *atmosphereContent;
@property (nonatomic) double atmosphereSpacingMax;
@property (nonatomic) double atmosphereSpacingMin;
@property (nonatomic) double atmosphereContentHeight;
@property (nonatomic) double mainContentHeight;
@property (nonatomic) double danmakuHeight;
@property (nonatomic) BOOL pinModeRequired;
@property (nonatomic) BOOL official;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long hoverSecond;
@property (retain, nonatomic) HTSLiveImage *jumpIcon;
@property (retain, nonatomic) id metaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
