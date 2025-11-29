@class NSData, NSString, NSArray, HybridResourceLoaderProcessorConfig, NSMutableDictionary, NSDictionary, IESECLynxCardURLParams, HybridContext, UIColor;
@protocol IESECListKitCardProvider, IESECListCardsContextDelegate;

@interface IESECLynxCardModel : NSObject

@property (retain, nonatomic) HybridContext *context;
@property (weak, nonatomic) id<IESECListKitCardProvider> lynxCardProvider;
@property (nonatomic) BOOL noTemplate;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL hasSendFirstEvent;
@property (retain, nonatomic) NSMutableDictionary *lynxSavedExtraData;
@property (nonatomic) BOOL enableJSRuntime;
@property (nonatomic) BOOL needResetPropsData;
@property (nonatomic) BOOL enableLynxStrictMode;
@property (copy, nonatomic) NSString *templateURL;
@property (retain, nonatomic) NSData *templateData;
@property (retain, nonatomic) IESECLynxCardURLParams *URLParams;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (retain, nonatomic) id lynxData;
@property (retain, nonatomic) NSString *dataIdentity;
@property (copy, nonatomic) NSDictionary *propsExtraData;
@property (copy, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) id extra;
@property (copy, nonatomic) NSDictionary *rootGlobalProps;
@property (nonatomic) BOOL greyEnable;
@property (copy, nonatomic) NSArray *bridges;
@property (copy, nonatomic) NSArray *xBridges;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *gurdPrefix;
@property (copy, nonatomic) NSString *aid;
@property (nonatomic) BOOL enableForest;
@property (nonatomic) double updateListWithDelayJump;
@property (nonatomic) long long threadStrategy;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *calculatorHeightCacheKey;
@property (nonatomic) double predictHeight;
@property (nonatomic) double preferredLayoutWidth;
@property (nonatomic) unsigned long long widthMode;
@property (nonatomic) double preferredLayoutHeight;
@property (nonatomic) unsigned long long heightMode;
@property (nonatomic) double estimateHeight;
@property (nonatomic) double rootHeight;
@property (nonatomic) double rootWidth;
@property (nonatomic) BOOL useCustomLoadingColor;
@property (retain, nonatomic) UIColor *loadingColor;
@property (nonatomic) double loadingCornerRadius;
@property (copy, nonatomic) NSDictionary *hybridMonitorContext;
@property (copy, nonatomic) NSString *hmBid;
@property (nonatomic) BOOL optLynxViewLoad;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) BOOL disableCardMonitor;
@property (weak, nonatomic) id<IESECListCardsContextDelegate> listCardsContextDelegate;
@property (nonatomic) BOOL isPreDecode;
@property (nonatomic) long long lastUpdateTimeNumber;
@property (copy, nonatomic) NSString *markChipInfo;
@property (retain, nonatomic) HybridResourceLoaderProcessorConfig *resourceProcessorConfig;
@property (nonatomic) BOOL preventLayoutWhenWidthDiffLessThanOne;
@property (nonatomic) BOOL renderInNextLoop;
@property (retain, nonatomic) NSData *SSRData;
@property (copy, nonatomic) NSDictionary *hydrateData;
@property (copy, nonatomic) NSString *hydrateUrl;

- (void)setupHybridMonitorContextWith:(id)a0 extraContext:(id)a1 enableCurrentGeckoVersion:(BOOL)a2;
- (id)getUniquePath;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;

@end
