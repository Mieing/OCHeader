@class NSNumber, NSString, NSArray;

@interface AnnieEcSharePanelParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *requestPage;
@property (nonatomic) BOOL needBeforeShare;
@property (copy, nonatomic) NSString *beforeShareRequestParams;
@property (copy, nonatomic) NSString *panelType;
@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSArray *actionList;
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
@property (nonatomic) BOOL needBeforeShareCache;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
