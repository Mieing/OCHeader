@class NSNumber, NSString, NSArray;

@interface BDXBridgeEcSharePanelMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *requestPage;
@property (nonatomic) BOOL needBeforeShare;
@property (copy, nonatomic) NSString *beforeShareRequestParams;
@property (copy, nonatomic) NSString *panelType;
@property (nonatomic) BOOL goToAppWithoutDialog;
@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *qrExtra;
@property (copy, nonatomic) NSString *shareTemplate;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *shoppingPosterLynxUrl;
@property (copy, nonatomic) NSString *shoppingPosterJsonData;
@property (copy, nonatomic) NSString *shoppingLynxQrUrl;
@property (copy, nonatomic) NSString *shoppingLynxQrJsonData;
@property (copy, nonatomic) NSString *ecomShareTrackParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *tokenExtra;
@property (copy, nonatomic) NSString *innerUrl;
@property (copy, nonatomic) NSString *imExtra;
@property (copy, nonatomic) NSString *imCover;
@property (copy, nonatomic) NSString *bcmChain;
@property (copy, nonatomic) NSString *beforeShareExtra;
@property (retain, nonatomic) NSNumber *needBeforeShareCache;
@property (retain, nonatomic) NSArray *channelList;
@property (retain, nonatomic) NSArray *actionList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
