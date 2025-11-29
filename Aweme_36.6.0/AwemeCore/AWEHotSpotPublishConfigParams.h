@class NSString, NSDictionary, AWESearchHotSpotConfigModel, NSArray, AWEChallengeModel;
@protocol AWEUGCTopicServiceProtocol, AWESearchVerticalServiceProtocol;

@interface AWEHotSpotPublishConfigParams : NSObject

@property (retain, nonatomic) AWESearchHotSpotConfigModel *configModel;
@property (nonatomic) BOOL fromUGCHashTagPage;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *imprId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long barType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logParams;
@property (copy, nonatomic) NSDictionary *mobParamsExtra;
@property (nonatomic) BOOL cameraParamFromCard;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *doujuId;
@property (nonatomic) BOOL isAIEffect;
@property (nonatomic) BOOL isImageTextTemplate;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *stickerText;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *hotSpotSentence;
@property (copy, nonatomic) NSString *customCellUrl;
@property (copy, nonatomic) NSDictionary *clientServerExtra;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *moduleId;
@property (nonatomic) BOOL isImageTemplate;
@property (nonatomic) unsigned long long publishType;
@property (copy, nonatomic) NSArray *stickers;
@property (weak, nonatomic) id<AWEUGCTopicServiceProtocol, AWESearchVerticalServiceProtocol> ugcService;
@property (nonatomic) BOOL shouldAddCameraCard;
@property (copy, nonatomic) AWEChallengeModel *challengeModel;
@property (nonatomic) BOOL disableNoLanding;

- (void).cxx_destruct;

@end
