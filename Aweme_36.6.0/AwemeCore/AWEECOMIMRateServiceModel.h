@class NSString, NSArray, NSDictionary, AWEECOMIMChatDetailMessageCacheManager, NSMutableArray, AWEECOMIMRateResultModel, AWEECOMIMRateResolveModel, NSNumber;
@protocol AWEECOMIMPaasMessageBridgeProtocol;

@interface AWEECOMIMRateServiceModel : NSObject

@property (nonatomic) BOOL supportModify;
@property (copy, nonatomic) NSDictionary *rateResultDict;
@property (retain, nonatomic) id<AWEECOMIMPaasMessageBridgeProtocol> curMessage;
@property (copy, nonatomic) NSArray *itemList;
@property (copy, nonatomic) NSNumber *cid;
@property (copy, nonatomic) NSString *talkId;
@property (copy, nonatomic) NSString *starsSelected;
@property (retain, nonatomic) NSMutableArray *selectedTagArr;
@property (retain, nonatomic) NSString *resolveSelected;
@property (nonatomic) BOOL isUseNewTagModel;
@property (copy, nonatomic) NSString *inputTagText;
@property (nonatomic) BOOL hasUpdate;
@property (nonatomic) BOOL isRobotService;
@property (nonatomic) long long commentType;
@property (copy, nonatomic) NSString *lastSelectTagText;
@property (retain, nonatomic) AWEECOMIMRateResultModel *rateResultModel;
@property (readonly, copy, nonatomic) NSString *localLastTagDefaultTitle;
@property (copy, nonatomic) NSArray *starsTagList;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isGift;
@property (nonatomic) BOOL isStack;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (weak, nonatomic) AWEECOMIMChatDetailMessageCacheManager *cardStateManager;
@property (retain, nonatomic) AWEECOMIMRateResolveModel *resolveModel;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL shouldShowResolve;

+ (BOOL)checkIsIn24Hours:(id)a0;

- (BOOL)checkSupportModifyAndShowToast;
- (id)configRateServiceItemListWithTagDict:(id)a0 shouldUnSelected:(BOOL)a1;
- (id)resolveModelWithUIConfigResolveDict:(id)a0;
- (void)setupIsNewStyleAndShouldShowResolveWithUIConfigDict:(id)a0 uiConfigResolveDict:(id)a1;
- (id)commentTypeDict;
- (id)configRateServiceItemListWithTagDict:(id)a0 shouldUnSelected:(BOOL)a1 uiConfigModel:(id)a2;
- (id)starsNameWithType:(long long)a0;
- (id)iconUnSelectedUrlWithType:(long long)a0;
- (id)iconSelectedUrlWithType:(long long)a0;
- (id)initWithCommnetInfoDict:(id)a0 resultDict:(id)a1;
- (void)updateModelWithSelecedIndex:(long long)a0;
- (void)updateSupportModify:(BOOL)a0;
- (void)updateCurMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
