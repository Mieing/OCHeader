@class BDADLiveRoomCardModel, NSString, NSDictionary, NSNumber;
@protocol Ignore, Optional;

@interface BDADWindmillModel : JSONModel

@property (retain, nonatomic) NSNumber<Optional> *adID;
@property (retain, nonatomic) NSNumber<Optional> *creativeID;
@property (copy, nonatomic) NSString<Optional> *logExtra;
@property (copy, nonatomic) NSString<Optional> *componentExtra;
@property (copy, nonatomic) NSDictionary<Optional> *liveIconUrl;
@property (copy, nonatomic) NSDictionary<Optional> *liveWebpUrl;
@property (copy, nonatomic) NSDictionary<Optional> *liveWebpUrlV2;
@property (copy, nonatomic) NSString<Optional> *skanParameters;
@property (copy, nonatomic) NSString<Optional> *webTitle;
@property (copy, nonatomic) NSString<Optional> *webUrl;
@property (copy, nonatomic) NSString<Optional> *playableUrl;
@property (copy, nonatomic) NSString<Optional> *educationUrl;
@property (copy, nonatomic) NSString<Optional> *openUrl;
@property (copy, nonatomic) NSString<Optional> *ironManUrl;
@property (copy, nonatomic) NSString<Ignore> *lynxScheme;
@property (copy, nonatomic) NSString<Optional> *downloadUrl;
@property (copy, nonatomic) NSString<Optional> *liveItemID;
@property (copy, nonatomic) NSNumber<Optional> *groupID;
@property (copy, nonatomic) NSDictionary<Optional> *preloadData;
@property (copy, nonatomic) NSString<Ignore> *siteId;
@property (retain, nonatomic) NSNumber<Optional> *webviewType;
@property (retain, nonatomic) NSNumber<Optional> *preloadType;
@property (retain, nonatomic) NSNumber<Optional> *pricingType;
@property (copy, nonatomic) NSDictionary<Optional> *nativeSiteConfig;
@property (copy, nonatomic) NSDictionary<Optional> *cardInfos;
@property (copy, nonatomic) NSDictionary<Optional> *trackURLList;
@property (copy, nonatomic) NSDictionary<Optional> *clickTrackURLList;
@property (copy, nonatomic) NSDictionary<Ignore> *originData;
@property (copy, nonatomic) NSDictionary<Ignore> *liveRoomInfo;
@property (retain, nonatomic) BDADLiveRoomCardModel<Ignore> *cardModel;
@property (retain, nonatomic) NSNumber<Ignore> *isLiveRoomData;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
