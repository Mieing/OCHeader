@class NSMutableArray, HTSLiveChorusStageEffectConfig, NSString, HTSLiveImage, HTSLiveChorusMidiConfig, HTSLiveChorusEvaluateEffectConfig;

@interface HTSLiveLinkmicRealTimeChorusStage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveChorusMidiConfig *midiConfig;
@property (nonatomic) BOOL hasMidiConfig;
@property (retain, nonatomic) HTSLiveImage *songTitleBgImage;
@property (nonatomic) BOOL hasSongTitleBgImage;
@property (retain, nonatomic) HTSLiveImage *joinChorusBtnImage;
@property (nonatomic) BOOL hasJoinChorusBtnImage;
@property (retain, nonatomic) HTSLiveImage *closeEffectImage;
@property (nonatomic) BOOL hasCloseEffectImage;
@property (retain, nonatomic) HTSLiveChorusEvaluateEffectConfig *evaluateConfig;
@property (nonatomic) BOOL hasEvaluateConfig;
@property (retain, nonatomic) NSMutableArray *voiceWaveImagesArray;
@property (readonly, nonatomic) unsigned long long voiceWaveImagesArray_Count;
@property (retain, nonatomic) HTSLiveChorusStageEffectConfig *stageEffectConfig;
@property (nonatomic) BOOL hasStageEffectConfig;
@property (retain, nonatomic) HTSLiveImage *shareBgImage;
@property (nonatomic) BOOL hasShareBgImage;
@property (retain, nonatomic) HTSLiveImage *bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (copy, nonatomic) NSString *themeColor;
@property (retain, nonatomic) HTSLiveImage *leadSingerIconImage;
@property (nonatomic) BOOL hasLeadSingerIconImage;
@property (retain, nonatomic) HTSLiveImage *enterBtnImage;
@property (nonatomic) BOOL hasEnterBtnImage;

+ (id)descriptor;

@end
