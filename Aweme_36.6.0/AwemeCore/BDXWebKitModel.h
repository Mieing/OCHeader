@class BDArrayParam, BDDoubleParam, BDStringParam, NSString, BDBooleanParam;

@interface BDXWebKitModel : NSObject <BDSchemaModelProtocol>

@property (retain, nonatomic) BDBooleanParam *disableBounce;
@property (retain, nonatomic) BDBooleanParam *appendCommonParams;
@property (retain, nonatomic) BDArrayParam *appendGlobalProps;
@property (retain, nonatomic) BDBooleanParam *autoPlayBgm;
@property (retain, nonatomic) BDDoubleParam *clickStart;
@property (retain, nonatomic) BDBooleanParam *disableAllBounces;
@property (retain, nonatomic) BDBooleanParam *disableBounces;
@property (retain, nonatomic) BDBooleanParam *disableSaveImage;
@property (retain, nonatomic) BDBooleanParam *enableSecureLink;
@property (retain, nonatomic) BDStringParam *secLinkScene;
@property (retain, nonatomic) BDBooleanParam *disableWebviewSelectMenus;
@property (retain, nonatomic) BDBooleanParam *enableWebviewSelectSearch;
@property (retain, nonatomic) BDBooleanParam *hideSource;
@property (retain, nonatomic) BDBooleanParam *ignoreCachePolicy;
@property (retain, nonatomic) BDBooleanParam *useSystemUa;
@property (retain, nonatomic) BDBooleanParam *useWebViewTitle;
@property (retain, nonatomic) BDBooleanParam *webAutoMoveWithKeyboard;
@property (retain, nonatomic) BDBooleanParam *ADBlock;
@property (retain, nonatomic) BDBooleanParam *disableScalePageToFit;
@property (retain, nonatomic) BDBooleanParam *disableInputScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
