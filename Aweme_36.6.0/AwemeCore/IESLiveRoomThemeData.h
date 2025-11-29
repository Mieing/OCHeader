@class NSString, NSArray, HTSLiveAudioBGData;

@interface IESLiveRoomThemeData : NSObject

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *imageUri;
@property (nonatomic) unsigned long long bgType;
@property (copy, nonatomic) NSArray *imageBgUrls;
@property (copy, nonatomic) NSArray *imageAnimatedBgUrls;
@property (copy, nonatomic) NSArray *imageStaticBgUrls;
@property (copy, nonatomic) NSArray *iconMicNormalUrls;
@property (copy, nonatomic) NSArray *iconMicLockUrls;
@property (copy, nonatomic) NSString *micBgcolorValue;
@property (copy, nonatomic) NSString *colorMicLine;
@property (copy, nonatomic) NSString *colorMicText;
@property (readonly, nonatomic) HTSLiveAudioBGData *themeData;

- (id)initWithThemeData:(id)a0;
- (id)initWithImageBg:(id)a0 imageAnimatedBg:(id)a1 imageStaticBg:(id)a2 iconMicNormals:(id)a3 iconMicLock:(id)a4 micBgcolorValue:(id)a5 colorMicLine:(id)a6 colorMicText:(id)a7;
- (void).cxx_destruct;

@end
