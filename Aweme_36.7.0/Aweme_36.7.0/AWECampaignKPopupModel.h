@class NSArray, NSString, UIImage, AWECampaignKPopupButtonItem;

@interface AWECampaignKPopupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *showType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *completeID;
@property (copy, nonatomic) NSString *popupsID;
@property (copy, nonatomic) NSArray *timeRange;
@property (nonatomic) BOOL isResourcesReady;
@property (retain, nonatomic) UIImage *popupBGImage;
@property (retain, nonatomic) UIImage *actionButtonImage;
@property (copy, nonatomic) NSString *multiSchema;
@property (nonatomic) BOOL fromTC21;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long priorityLevel;
@property (copy, nonatomic) NSString *flowerRid;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL fromPitaya;
@property (copy, nonatomic) NSString *popupID;
@property (copy, nonatomic) NSArray *showPage;
@property (copy, nonatomic) NSArray *showTab;
@property (nonatomic) BOOL stopVideo;
@property (nonatomic) BOOL useNative;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (copy, nonatomic) NSString *VideoURL;
@property (copy, nonatomic) NSString *targetURL;
@property (copy, nonatomic) NSString *maskColor;
@property (retain, nonatomic) AWECampaignKPopupButtonItem *primaryButton;
@property (retain, nonatomic) AWECampaignKPopupButtonItem *secondaryButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeRangeJSONTransformer;
+ (id)showTypeJSONTransformer;
+ (id)primaryButtonJSONTransformer;
+ (id)secondaryButtonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)containShowType:(long long)a0;
- (void).cxx_destruct;

@end
