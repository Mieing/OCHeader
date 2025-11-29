@class AWEDTOAudioSourceContext, NSArray, NSString, AWEDTOLocationInfoEntry, NSDictionary, AWEDTOStyleInfoEntry;

@interface AWEDTOCaptionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEDTOStyleInfoEntry *styleInfo;
@property (retain, nonatomic) AWEDTOLocationInfoEntry *locationInfo;
@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) BOOL enableMandarinTranslation;
@property (nonatomic) BOOL isMandarinTranslation;
@property (copy, nonatomic) NSString *translationLanguage;
@property (nonatomic) long long mandarinStatus;
@property (copy, nonatomic) NSDictionary *intelligenceInfo;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSDictionary *styleConfig;
@property (nonatomic) BOOL highlightReady;
@property (nonatomic) BOOL enableDragAndRotate;
@property (retain, nonatomic) AWEDTOAudioSourceContext *voiceContext;
@property (retain, nonatomic) AWEDTOAudioSourceContext *musicContext;
@property (retain, nonatomic) AWEDTOAudioSourceContext *enableVoiceContext;
@property (retain, nonatomic) AWEDTOAudioSourceContext *enableMusicContext;
@property (retain, nonatomic) AWEDTOAudioSourceContext *selectedVoiceContext;
@property (retain, nonatomic) AWEDTOAudioSourceContext *selectedMusicContext;
@property (nonatomic) long long currentAudioSourceType;
@property (copy, nonatomic) NSDictionary *mandarinStatusByAudioSource;
@property (nonatomic) long long audioState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captionsJSONTransformer;
+ (id)voiceContextJSONTransformer;
+ (id)musicContextJSONTransformer;
+ (id)enableVoiceContextJSONTransformer;
+ (id)enableMusicContextJSONTransformer;
+ (id)selectedVoiceContextJSONTransformer;
+ (id)selectedMusicContextJSONTransformer;
+ (id)styleInfoJSONTransformer;
+ (id)locationInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
