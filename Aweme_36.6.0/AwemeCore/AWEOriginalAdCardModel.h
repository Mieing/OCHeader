@class NSString, NSDictionary, NSMutableDictionary, NSNumber, AWEURLModel;
@protocol AWEAdPreloadComponentContext;

@interface AWEOriginalAdCardModel : MTLModel <MTLJSONSerializing, AWEAdPreloadComponentProtocol>

@property (copy, nonatomic) NSString *adStatusCode;
@property (copy, nonatomic) NSString *cardURL;
@property (copy, nonatomic) NSString *cardURL2;
@property (copy, nonatomic) NSString *cardURL2Lynx;
@property (copy, nonatomic) NSDictionary *cardData;
@property (nonatomic) unsigned long long cardType;
@property (readonly, nonatomic) BOOL isWebMask;
@property (nonatomic) long long showSeconds;
@property (retain, nonatomic) NSNumber *showDuration;
@property (nonatomic) unsigned long long cardStyle;
@property (nonatomic) long long dynamicType;
@property (copy, nonatomic) AWEURLModel *impressionTrackURLModel;
@property (nonatomic) unsigned long long preloadType;
@property (nonatomic) long long preloadBeforeShow;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) unsigned long long cardComponentType;
@property (nonatomic) unsigned long long cardStyleType;
@property (readonly, nonatomic) BOOL isCancelShowMessage;
@property (nonatomic) BOOL isLiveCommerceFragmentReconstructABTest;
@property (nonatomic) BOOL isCardShowAtLeft;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *gameCardData;
@property (nonatomic) long long liveCardStyle;
@property (retain, nonatomic) NSNumber *liveCardShowTime;
@property (retain, nonatomic) NSNumber *liveCardCyclingShow;
@property (nonatomic) unsigned long long closeBtnStyle;
@property (nonatomic) long long fontScaleType;
@property (nonatomic) BOOL clueLeadsProductPreload;
@property (copy, nonatomic) NSDictionary *clueLeadsProductPreloadInfo;
@property (copy, nonatomic) NSString *landingPagePreloadConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (void).cxx_destruct;
- (id)init;
- (id)componentType;

@end
