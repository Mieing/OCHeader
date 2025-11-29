@class NSString, NSArray, AWEPublishInstanceResultModel, UIImage, ACCModernTextModeStyleModel, NSDictionary, NSMutableArray, NSProgress, ACCAIMateEditEffectConfig;
@protocol ACCPublishRepository;

@interface AWERepoInstanceContextModel : NSObject <ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated, NSCopying, ACCRepoInstanceContextData, ACCRepoRegister>

@property (copy, nonatomic) NSString *aigcMark;
@property (nonatomic) BOOL shouldAddAIWatermark;
@property (retain, nonatomic) NSMutableArray *aigcMarkHistoryStack;
@property (weak, nonatomic) UIImage *previewImage;
@property (nonatomic) long long poiVideoSource;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (nonatomic) unsigned long long subMediaType;
@property (copy, nonatomic) NSString *zipURI;
@property (copy, nonatomic) NSString *instanceID;
@property (nonatomic) BOOL isTextMode;
@property (nonatomic) BOOL isTemplateMode;
@property (nonatomic) BOOL isSimplifiedTextMode;
@property (nonatomic) unsigned long long textModeEnterMethod;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } templateRect;
@property (copy, nonatomic) ACCModernTextModeStyleModel *styleModel;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double inputFontSize;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateStyleId;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSArray *extraModels;
@property (copy, nonatomic) NSString *originText;
@property (copy, nonatomic) ACCModernTextModeStyleModel *originStyleModel;
@property (copy, nonatomic) NSString *originTemplateId;
@property (copy, nonatomic) NSString *originTemplateStyleId;
@property (nonatomic) BOOL ignoreBackBtnAlert;
@property (nonatomic) BOOL appendChallengeIdListInTextMode;
@property (copy, nonatomic) NSDictionary *styleIdCache;
@property (copy, nonatomic) NSDictionary *styleDimensionsCache;
@property (copy, nonatomic) NSDictionary *wordSegmentsCache;
@property (copy, nonatomic) NSDictionary *moodSwingCache;
@property (readonly, nonatomic) AWEPublishInstanceResultModel *publishResult;
@property (readonly, nonatomic) NSProgress *playerProgress;
@property (copy, nonatomic) NSArray *gradientBlurColors3FromRecordCapture;
@property (copy, nonatomic) NSArray *gradientBlurColors3;
@property (nonatomic) BOOL isCalculateGradientBlurColors3;
@property (copy, nonatomic) NSArray *gradientBlurColors2;
@property (nonatomic) BOOL isCalculateGradientBlurColors2;
@property (nonatomic) BOOL isAIMateEdit;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ACCAIMateEditEffectConfig *waitingAIGCConfig;

+ (id)repo_dataProtocol;

- (id)phAssetLocalIdentifier;
- (void)setAigcMark:(id)a0 shouldAddAIWatermark:(BOOL)a1 withBusinessID:(id)a2;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)rollbackAigcMarkForBusiness:(id)a0;
- (id)aigcMarkList;
- (void)recoverAigcMarkList:(id)a0;
- (BOOL)useCanvasMode;
- (BOOL)isModernTextInstance;
- (void)clearTextModeInfos;
- (BOOL)supportCanvasEdit;
- (BOOL)didEdit;
- (void)addAigcMarkList:(id)a0;
- (id)aigcMarkHistoryDescription;
- (struct CGSize { double x0; double x1; })canvasContentSize;
- (double)needPlayDuration:(BOOL)a0 hasTextRead:(BOOL)a1;
- (BOOL)isFromTextMode:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
