@class NSString, IESLiveDanmakuSupremeSettings;
@protocol IESLiveRoomService, IESLiveDanmakuGiftSizeSetting;

@interface IESLiveDanmakuEngineSettings : NSObject <IESLiveDanmakuEngineSettingsProtocol>

@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } projectDNormalDanmukuFrame;
@property (nonatomic) BOOL isiPadLandscapeMode;
@property (nonatomic) BOOL lotterySettingEnable;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long fontSizeType;
@property (retain, nonatomic) IESLiveDanmakuSupremeSettings *supremeSettings;
@property (retain, nonatomic) id<IESLiveDanmakuGiftSizeSetting> giftSizeSetting;
@property (nonatomic) unsigned long long position;
@property (nonatomic) long long areaType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } seniorFrame;
@property (nonatomic) BOOL enableGiftDanmuku;
@property (nonatomic) BOOL enableLotteryDanmuku;
@property (nonatomic) BOOL enableChatChannelDanmaku;
@property (nonatomic) BOOL enableCarnivalDanmaku;
@property (nonatomic) double normalDanmakuHeight;
@property (nonatomic) double seniorDanmakuHeight;
@property (nonatomic) double seniorChannelHeight;
@property (nonatomic) double giftChannelHeight;
@property (nonatomic) BOOL singleChannelMode;
@property (nonatomic) double avatarSize;
@property (nonatomic) double badgeSize;
@property (nonatomic) BOOL enableOdd;
@property (nonatomic) BOOL enableAdjustPadding;
@property (nonatomic) BOOL enableAdjustSpeed;
@property (nonatomic) BOOL enableThrow;
@property (nonatomic) BOOL enableSpeedDynamicStrategy;
@property (nonatomic) BOOL enableAdjustSpeedForLongDanmaku;
@property (nonatomic) long long giftLimitMaxCount;
@property (nonatomic) double animationSpeed;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL enableNormalDanmuku;
@property (nonatomic) double normalChannelHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalDanmukuFrame;
@property (nonatomic) double alpha;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSettingsWithDiContext:(id)a0;

- (id)initWithDiContext:(id)a0;
- (void)fragmentOrientationChanged:(long long)a0;
- (void)loadRemoteSettings;
- (void).cxx_destruct;
- (void)resetFrames;

@end
