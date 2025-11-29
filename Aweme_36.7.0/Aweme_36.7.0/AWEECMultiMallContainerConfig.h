@class UIView, NSString, IESECListKitBackgroundModel, NSDictionary, IESECMallWhiteBoard, IESECMallCategoryTabInfoModel, IESECLynxCard, AWEECMultiMallGeneralListManager;
@protocol IESECMallAnchorFloatingProtocol, IESECXBridgeCallHandlerService;

@interface AWEECMultiMallContainerConfig : NSObject <AWEECMultiMallContainerConfigProtocol>

@property (retain, nonatomic) IESECMallWhiteBoard *whiteBoard;
@property (retain, nonatomic) AWEECMultiMallGeneralListManager *listManager;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *link;
@property (retain, nonatomic) IESECMallCategoryTabInfoModel *tabInfo;
@property (copy, nonatomic) NSString *realOpenTime;
@property (weak, nonatomic) UIView<IESECMallAnchorFloatingProtocol> *globalContainerView;
@property (weak, nonatomic) IESECLynxCard *topBarView;
@property (copy, nonatomic) NSString *envID;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *BTM_B;
@property (nonatomic) double topOffset;
@property (nonatomic) long long tabIndex;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (copy, nonatomic) NSString *splicingEnterFrom;
@property (copy, nonatomic) NSString *theme;
@property (copy, nonatomic) NSDictionary *industrySettings;
@property (weak, nonatomic) UIView *pageCard;
@property (copy, nonatomic) NSDictionary *themeConfig;
@property (copy, nonatomic) NSDictionary *currentRouterParams;
@property (retain, nonatomic) IESECListKitBackgroundModel *skinInfo;
@property (nonatomic) double backTopBottomMargin;
@property (weak, nonatomic) id<IESECXBridgeCallHandlerService> JSBHandler;
@property (nonatomic) BOOL hasSkinConfig;
@property (nonatomic) BOOL disableRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
