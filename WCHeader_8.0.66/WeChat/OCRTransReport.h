@class NSDate;

@interface OCRTransReport : NSObject

@property (nonatomic) BOOL shouldExitActionReported;
@property (readonly, nonatomic) unsigned long long captureCost;
@property (readonly, nonatomic) unsigned long long uploadCost;
@property (readonly, nonatomic) unsigned long long ocrTranslateCost;
@property (readonly, nonatomic) unsigned long long ocrTotalCost;
@property (readonly, nonatomic) unsigned long long firstEnhanceCost;
@property (readonly, nonatomic) unsigned long long translateExposeCost;
@property (readonly, nonatomic) unsigned long long totalCost;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned int showOriginCount;
@property (nonatomic) unsigned int hasSaveResult;
@property (nonatomic) unsigned int hasSaveOrigin;
@property (nonatomic) BOOL isBizImgTranslating;
@property (nonatomic) unsigned long long enhanceModelCostTime;
@property (nonatomic) unsigned int enhanceCount;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *captureTime;
@property (retain, nonatomic) NSDate *startUploadTime;
@property (retain, nonatomic) NSDate *endUploadTime;
@property (retain, nonatomic) NSDate *getResultTime;
@property (retain, nonatomic) NSDate *startEnhanceTime;
@property (retain, nonatomic) NSDate *endEnhanceTime;
@property (retain, nonatomic) NSDate *firstEndEnhanceTime;

+ (void)reportImageOCRActionType:(unsigned int)a0 sessionID:(id)a1;
+ (void)reportImageOCRActionType:(unsigned int)a0 sessionID:(id)a1 ocrResultType:(long long)a2;
+ (void)reportImageOCRZoomType:(unsigned int)a0 sessionID:(id)a1;
+ (void)reportImageOCRTaskIdKey:(unsigned int)a0;
+ (void)reportImageOCREnterScene:(unsigned int)a0 opType:(unsigned int)a1;

- (void)reportExposeAction;
- (void)reportExitAction;
- (void)reset;
- (void).cxx_destruct;

@end
