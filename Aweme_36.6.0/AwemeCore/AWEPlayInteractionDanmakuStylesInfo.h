@class NSString, NSArray;

@interface AWEPlayInteractionDanmakuStylesInfo : NSObject <NSCoding, NSCopying, AWEDanmakuStylesInfoProtocol>

@property (nonatomic) unsigned long long displayArea;
@property (nonatomic) double danmakuAlpha;
@property (nonatomic) unsigned long long fontSize;
@property (nonatomic) unsigned long long speed;
@property (nonatomic) BOOL switchOn;
@property (nonatomic) BOOL fakeCloseSwitchOn;
@property (nonatomic) BOOL needFakeOpenSwitch;
@property (nonatomic) BOOL needSwitchSameWithVertical;
@property (nonatomic) BOOL needSameConfigWithVertical;
@property (nonatomic) BOOL antiBlockSwitch;
@property (nonatomic) BOOL shieldWordSwitch;
@property (copy, nonatomic) NSString *switchFrom;
@property (copy, nonatomic) NSArray *shieldWords;
@property (nonatomic) BOOL smartModeSwitch;
@property (nonatomic) BOOL isDefaultOpacity;
@property (nonatomic) BOOL isDefaultSize;
@property (nonatomic) BOOL isDefaultSpeed;
@property (nonatomic) BOOL isDefaultRegion;
@property (nonatomic) BOOL isDefaultSmartModeSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)defaultStylesInfo;

- (void)dealloc;
- (id)aAWEPadModuleAdapter;
- (double)fontSizeValueIsFullScreen:(BOOL)a0;
- (void)updateStylesWithNewStyleInfo:(id)a0 needUpdateSwitch:(BOOL)a1;
- (id)formatToString:(BOOL)a0;
- (id)formatToString;
- (float)rollingDisplayTimeIsFullScreen:(BOOL)a0;
- (float)displayAreaValueIsFullScreen:(BOOL)a0;
- (double)obtainSettingsFontSizeConstantValue;
- (double)obtainSettingsSpeedConstantValue;
- (long long)lineSpacingIsFullScreen:(BOOL)a0 isRelated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })diggImageSizeIsFullScreen:(BOOL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
