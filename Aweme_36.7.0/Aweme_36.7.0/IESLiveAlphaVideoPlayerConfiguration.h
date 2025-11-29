@class NSString, NSDictionary, NSMutableDictionary, HTSLiveGiftMessage_TextEffect;

@interface IESLiveAlphaVideoPlayerConfiguration : NSObject

@property (copy, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) HTSLiveGiftMessage_TextEffect *textEffect;
@property (nonatomic) BOOL textEffectImageNeedCircle;
@property (retain, nonatomic) NSDictionary *effectMixGiftMaskInfo;
@property (nonatomic) BOOL enableSR;
@property (nonatomic) BOOL enableAudio;
@property (nonatomic) BOOL enableVibrate;
@property (nonatomic) BOOL levelAboveLynxView;
@property (copy, nonatomic) NSString *soundGuideWords;
@property (copy, nonatomic) NSString *vibrateGuideWords;
@property (retain, nonatomic) NSDictionary *extraTrack;
@property (retain, nonatomic) NSMutableDictionary *monitorDict;

- (void).cxx_destruct;

@end
