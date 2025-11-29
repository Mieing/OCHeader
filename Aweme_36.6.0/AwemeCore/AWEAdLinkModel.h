@class AWEURLModel, NSString, NSArray, NSMutableDictionary, AWEOriginalAdPreloadModel, NSNumber;
@protocol AWEAdPreloadComponentContext;

@interface AWEAdLinkModel : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing, AWEAdPreloadComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long preloadType;
@property (retain, nonatomic) AWEOriginalAdPreloadModel *preloadData;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *ironManURL;
@property (retain, nonatomic) AWEURLModel *avatarIcon;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) long long showType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *commentTitle;
@property (copy, nonatomic) NSString *featureDesc;
@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) AWEURLModel *commentAvatarIcon;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (retain, nonatomic) NSArray *backgroundURLArray;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long linkType;
@property (retain, nonatomic) NSNumber *companySubType;
@property (copy, nonatomic) NSString *companyLinkName;
@property (copy, nonatomic) NSArray *linkIconsLight;
@property (copy, nonatomic) NSArray *linkIconsDark;
@property (retain, nonatomic) NSNumber *reportShowType;
@property (retain, nonatomic) NSNumber *componentID;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL reportEnabled;
@property (copy, nonatomic) NSString *tipsText;
@property (nonatomic) BOOL disliked;
@property (copy, nonatomic) NSString *SKANParamsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)avatarIconJSONTransformer;
+ (id)commentAvatarIconJSONTransformer;
+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)showStyleJSONTransformer;
+ (id)backgroundURLArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)a0;
- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (void).cxx_destruct;
- (id)init;
- (id)componentSeparator;
- (id)iconImageName;
- (id)componentType;

@end
