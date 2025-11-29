@class UIColor, NSArray, NSString, AWELiveSpeakingImageList, AWEURLModel;

@interface AWELiveAudioRoomBGImage : NSObject

@property (nonatomic) long long id_p;
@property (retain, nonatomic) AWEURLModel *image;
@property (retain, nonatomic) AWEURLModel *imageThumbnail;
@property (retain, nonatomic) AWEURLModel *imageAnimatedBg;
@property (retain, nonatomic) AWEURLModel *imageStaticBg;
@property (retain, nonatomic) AWEURLModel *imageNormalAvatar;
@property (retain, nonatomic) AWEURLModel *imageStartupAvatar;
@property (retain, nonatomic) AWEURLModel *imageChatJoinIcon;
@property (retain, nonatomic) AWELiveSpeakingImageList *speakingImageList;
@property (nonatomic) long long bgType;
@property (retain, nonatomic) UIColor *statusBarColor;
@property (retain, nonatomic) UIColor *publicScreenColorValue;
@property (retain, nonatomic) UIColor *emptyStartColor;
@property (retain, nonatomic) UIColor *emptyEndColor;
@property (retain, nonatomic) AWEURLModel *imageColdStart;
@property (copy, nonatomic) NSArray *iconMicNormals;
@property (retain, nonatomic) AWEURLModel *iconMicLock;
@property (copy, nonatomic) NSString *colorMicLine;
@property (copy, nonatomic) NSString *colorMicText;
@property (copy, nonatomic) NSString *micBgcolorValue;
@property (retain, nonatomic) AWEURLModel *videoBg;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) long long imgType;
@property (readonly, nonatomic) BOOL isAnimatedBg;

- (void).cxx_destruct;

@end
