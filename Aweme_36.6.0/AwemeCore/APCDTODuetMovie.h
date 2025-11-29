@class NSString, APCDTODuetSwitchMain, APCDTODuetMovieExtension;

@interface APCDTODuetMovie : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTODuetMovieExtension *extension;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL isDuetSing;
@property (copy, nonatomic) NSString *originVideoFile;
@property (copy, nonatomic) NSString *targetVideoFile;
@property (copy, nonatomic) NSString *targetAudioFile;
@property (copy, nonatomic) NSString *duetOrigin;
@property (copy, nonatomic) NSString *chorusMethod;
@property (nonatomic) long long duetGameScore;
@property (copy, nonatomic) NSString *gameStickerId;
@property (copy, nonatomic) NSString *regionCountry;
@property (copy, nonatomic) NSString *outputDir;
@property (copy, nonatomic) NSString *duetChallenge;
@property (nonatomic) long long startDuetTime;
@property (nonatomic) long long duetVideoWidth;
@property (nonatomic) long long duetVideoHeight;
@property (nonatomic) long long awemeDuration;
@property (copy, nonatomic) NSString *awemeAuthor;
@property (nonatomic) BOOL isDuetSingInClient;
@property (nonatomic) BOOL enableMicrophoneOnStart;
@property (copy, nonatomic) NSString *duetOriginalGroupId;
@property (copy, nonatomic) NSString *duetGroupId;
@property (retain, nonatomic) APCDTODuetSwitchMain *switchMain;
@property (nonatomic) long long materialMediaType;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *originDuetResourceUri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)switchMainJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (id)valid_awemeId;
- (void).cxx_destruct;

@end
