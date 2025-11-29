@class AWEStudioCaptionInfoModel, NSString, NSMutableDictionary, NSURL, ACCModernAutoCaptionUploadInfo;

@interface ACCAEAutoCaptionModel : NSObject <NSCopying>

@property (retain, nonatomic) AWEStudioCaptionInfoModel *captionInfo;
@property (retain, nonatomic) ACCModernAutoCaptionUploadInfo *uploadInfo;
@property (nonatomic) BOOL enableMandarinTranslation;
@property (nonatomic) BOOL isMandarinTranslation;
@property (nonatomic) unsigned long long mandarinStatus;
@property (retain, nonatomic) NSString *translationLanguage;
@property (nonatomic) BOOL translationToMandarin;
@property (copy, nonatomic) NSURL *mixAudioUrl;
@property (copy, nonatomic) NSString *mixAudioInfoMd5;
@property (nonatomic) long long currentAudioSourceType;
@property (nonatomic) long long audioState;
@property (retain, nonatomic) NSMutableDictionary *audioSourceContexts;
@property (retain, nonatomic) NSMutableDictionary *mandarinStatusByAudioSource;

- (BOOL)isMultiAudioSourceEnabled;
- (id)contextForAudioSourceType:(long long)a0;
- (BOOL)shouldUseDirectProperties;
- (void)syncCaptionsToCurrentContext:(id)a0;
- (void).cxx_destruct;
- (id)currentContext;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
