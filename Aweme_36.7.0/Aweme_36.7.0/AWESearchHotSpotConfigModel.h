@class AWETopicSearchBottomBarChallengeInfo, NSString, NSArray, AWEHotSearchBottomBarConfigInsertInfo, AWEHotSearchBottomBarConfigButtonInfo, AWETopicShootButtonStyleModel, AWETopicShootPopupModel, AWECodeGenChallengeTextTemplateModel, NSNumber;

@interface AWESearchHotSpotConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *discussShotText;
@property (copy, nonatomic) NSString *hotSpotId;
@property (copy, nonatomic) NSString *hotSpotTitle;
@property (retain, nonatomic) NSNumber *hotSpotType;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *doujuId;
@property (retain, nonatomic) NSNumber *isShow;
@property (retain, nonatomic) NSString *topicTitle;
@property (retain, nonatomic) NSString *topicBottomText;
@property (copy, nonatomic) NSString *innerFlowTopicBtnTitle;
@property (retain, nonatomic) NSNumber *topicBottomBarType;
@property (retain, nonatomic) NSNumber *topicChallengeId;
@property (retain, nonatomic) NSArray *challengeIdList;
@property (retain, nonatomic) NSNumber *challengeType;
@property (retain, nonatomic) NSNumber *interactionStyle;
@property (retain, nonatomic) AWETopicSearchBottomBarChallengeInfo *challengeInfo;
@property (retain, nonatomic) NSNumber *publishType;
@property (nonatomic) BOOL publishOptimize;
@property (nonatomic) BOOL publishOptimizeDisableDoubleColumn;
@property (nonatomic) BOOL publishPageEnable;
@property (copy, nonatomic) NSString *hashtagCustomCellUrl;
@property (nonatomic) long long hashtagShootIconStyle;
@property (copy, nonatomic) NSString *fromUgcHashtagBank;
@property (nonatomic) BOOL isFromInteractionStickers;
@property (retain, nonatomic) NSString *scene;
@property (nonatomic) BOOL hideVoiceSearch;
@property (retain, nonatomic) NSString *hotspotSentence;
@property (retain, nonatomic) AWEHotSearchBottomBarConfigButtonInfo *buttonInfo;
@property (retain, nonatomic) AWEHotSearchBottomBarConfigInsertInfo *insertInfo;
@property (retain, nonatomic) AWETopicShootButtonStyleModel *buttonStyle;
@property (retain, nonatomic) AWETopicShootPopupModel *popupInfo;
@property (retain, nonatomic) AWECodeGenChallengeTextTemplateModel *textTemplate;

+ (id)buttonInfoJSONTransformer;
+ (id)insertInfoJSONTransformer;
+ (id)challengeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isFromUgcHashtagBank;
- (unsigned long long)currentHotSpotPublishType;
- (long long)getBottomBarConfigType;
- (void)setPublishTypeWithChallengePublishType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
