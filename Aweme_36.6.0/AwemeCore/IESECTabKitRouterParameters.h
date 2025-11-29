@class NSString, NSDictionary, NSArray;

@interface IESECTabKitRouterParameters : NSObject

@property (nonatomic) long long anchorTabID;
@property (nonatomic) unsigned long long pageModal;
@property (nonatomic) double maskAlpha;
@property (nonatomic) long long splitRadius;
@property (nonatomic) BOOL disablePullDownClose;
@property (nonatomic) BOOL disableUpFullScreen;
@property (nonatomic) BOOL splitIndicatorHidden;
@property (nonatomic) long long heightPercent;
@property (nonatomic) long long autoUpSlideRatio;
@property (copy, nonatomic) NSString *apiURL;
@property (copy, nonatomic) NSString *certID;
@property (copy, nonatomic) NSDictionary *apiParams;
@property (copy, nonatomic) NSArray *apiParamsKeyList;
@property (copy, nonatomic) NSString *anchorURL;
@property (copy, nonatomic) NSString *anchorBgColor;
@property (copy, nonatomic) NSString *ssrURL;
@property (nonatomic) BOOL ssrPrefetchAnchorURL;
@property (copy, nonatomic) NSString *anchorAPIURL;
@property (copy, nonatomic) NSString *anchorAPIParams;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (nonatomic) unsigned long long anchorURLType;
@property (nonatomic) unsigned long long anchorHybridContainer;
@property (nonatomic) unsigned long long heightMode;
@property (nonatomic) BOOL singleTabMode;
@property (nonatomic) BOOL showBackIcon;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *entranceLocation;
@property (copy, nonatomic) NSDictionary *bizCustomCategory;
@property (nonatomic) double routerStartTime;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *originScheme;
@property (readonly, nonatomic) BOOL canLoadFirstScreen;
@property (nonatomic) BOOL enablePadAdapter;
@property (nonatomic) double padRatio;
@property (copy, nonatomic) NSString *btmAB;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) BOOL grayMode;
@property (nonatomic) unsigned long long transition;
@property (copy, nonatomic) NSDictionary *marketingInfo;

- (id)initWithRouterParams:(id)a0;
- (id)anchorBgColorFromParams:(id)a0;
- (unsigned long long)transferContainerTypeByTypeString:(id)a0;
- (void)checkRouterParams;
- (void).cxx_destruct;

@end
