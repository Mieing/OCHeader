@class NSString, NSArray, NSDictionary, UIView, NSNumber, AWEECShareReflowDialogInfoModel;
@protocol BDXViewContainerProtocol;

@interface AWEShareEcomActivityModel : NSObject

@property (retain, nonatomic) NSNumber *requestPage;
@property (nonatomic) BOOL needBeforeShare;
@property (copy, nonatomic) NSString *beforeShareRequestParams;
@property (copy, nonatomic) NSString *beforeShareExtra;
@property (copy, nonatomic) NSString *panelType;
@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSArray *actionList;
@property (nonatomic) BOOL goToAppWithoutDialog;
@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *qrExtra;
@property (copy, nonatomic) NSString *tokenExtra;
@property (copy, nonatomic) NSString *shareTemplate;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *shoppingPosterLynxUrl;
@property (copy, nonatomic) NSString *shoppingPosterJsonData;
@property (copy, nonatomic) NSString *shoppingLynxQrUrl;
@property (copy, nonatomic) NSString *shoppingLynxQrJsonData;
@property (copy, nonatomic) NSString *ecomShareTrackParams;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *messageContent;
@property (retain, nonatomic) NSNumber *messageType;
@property (copy, nonatomic) NSString *innerUrl;
@property (copy, nonatomic) NSString *imExtra;
@property (copy, nonatomic) NSString *imCover;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL shareImageLoadQRCodeImageSuccess;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *qrImageView;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *posterImageView;
@property (copy, nonatomic) NSArray *qrCodeUrlList;
@property (copy, nonatomic) NSDictionary *logInfo;
@property (copy, nonatomic) NSString *shareId;
@property (retain, nonatomic) AWEECShareReflowDialogInfoModel *posterLynxInfo;
@property (retain, nonatomic) AWEECShareReflowDialogInfoModel *qrLynxInfo;
@property (copy, nonatomic) NSString *bcmChain;
@property (copy, nonatomic) NSString *bcmShareId;
@property (copy, nonatomic) NSString *beforeShareJsonData;
@property (copy, nonatomic) NSString *shareExtraInfo;
@property (nonatomic) BOOL disableToken;
@property (nonatomic) BOOL isMarketPanel;

- (void).cxx_destruct;

@end
