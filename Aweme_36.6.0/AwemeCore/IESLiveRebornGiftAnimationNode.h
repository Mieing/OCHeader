@class IESLiveGiftVideoInfo, NSString, HTSLiveImage, GPBInt64Array, NSArray, NSDictionary, HTSLiveGiftStruct, IESLiveGiveGiftTimeTraceTool, NSNumber, IESLiveGiftBaseInfo;

@interface IESLiveRebornGiftAnimationNode : NSObject <NSCopying>

@property (nonatomic) BOOL useNtpDiffTime;
@property (nonatomic) BOOL enablePromoteAssetsUsedRecord;
@property (retain, nonatomic) IESLiveGiftVideoInfo *giftVideoInfo;
@property (retain, nonatomic) IESLiveGiftBaseInfo *giftBaseInfo;
@property (nonatomic) unsigned long long nodeType;
@property (nonatomic) long long bannedDisplayType;
@property (nonatomic) BOOL isSendBySelf;
@property (nonatomic) BOOL isReceiver;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) BOOL isConsumed;
@property (retain, nonatomic) NSNumber *receivedTime;
@property (retain, nonatomic) NSNumber *messageReceivedTime;
@property (retain, nonatomic) NSNumber *downloadCompleteTime;
@property (retain, nonatomic) NSNumber *startPlayTime;
@property (copy, nonatomic) NSString *messageScene;
@property (retain, nonatomic) NSNumber *playPriority;
@property (copy, nonatomic) NSString *interactGiftInfo;
@property (copy, nonatomic) NSString *assemblyGiftItemListStr;
@property (retain, nonatomic) HTSLiveImage *anchorDiyOriginImg;
@property (copy, nonatomic) NSString *comboKey;
@property (retain, nonatomic) GPBInt64Array *requiredAssetsArray;
@property (retain, nonatomic) NSNumber *effectPrice;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long realCount;
@property (retain, nonatomic) HTSLiveGiftStruct *effectPreviewGiftModel;
@property (retain, nonatomic) IESLiveGiveGiftTimeTraceTool *traceTool;
@property (copy, nonatomic) NSString *finishSchema;
@property (nonatomic) long long superResolutionTriggerType;
@property (retain, nonatomic) NSArray *seriesGiftData;
@property (nonatomic) double acceptTime;
@property (nonatomic) long long currentStarSection;
@property (nonatomic) BOOL isOtherRoom;
@property (nonatomic) BOOL isLightGiftMessage;

- (id)initWithDIContext:(id)a0;
- (BOOL)isLynxGift;
- (BOOL)sendTogetherAvailableWithNtpTime:(long long)a0;
- (id)toGiftMessage;
- (id)getCurrentNodeToGiftStructWithNode;
- (id)requiredAssets;
- (id)staticAssetsWithNode;
- (BOOL)isBigGiftNode;
- (BOOL)enableTrayGroup;
- (BOOL)enableTrayComboApproximate;
- (id)valueInQueueWithQueueType:(unsigned long long)a0;
- (id)debugInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
