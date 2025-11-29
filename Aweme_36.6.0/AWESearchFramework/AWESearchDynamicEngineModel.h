@class NSString, NSArray, UIView, AWESearchAnnieXCardPrelayoutDelegate, AWEDynamicPatchModel;
@protocol AnnieXContainerBaseProtocol, LynxImageFetcher;

@interface AWESearchDynamicEngineModel : NSObject <AnnieXDataProviderProtocol>

@property (weak, nonatomic) AWEDynamicPatchModel *model;
@property (nonatomic) BOOL byReload;
@property (nonatomic) BOOL useAsyncLoad;
@property (retain, nonatomic) NSString *storedProcessedSchema;
@property (copy, nonatomic) NSString *searchScene;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *asyncLoadAnnieXView;
@property (retain, nonatomic) id<LynxImageFetcher> extraImageFetcher;
@property (copy, nonatomic) NSArray *extraCustomUIElements;
@property (retain, nonatomic) AWESearchAnnieXCardPrelayoutDelegate *prelayoutDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)registBDXService;
+ (id)searchGlobalPropsForModel:(id)a0 searchScene:(id)a1;
+ (id)p_lynxInitialDataWithModel:(id)a0 shouldUseAnnieX:(BOOL)a1;
+ (id)processedSchemaWithModel:(id)a0 searchScene:(id)a1 useAsyncLoad:(BOOL)a2;
+ (unsigned long long)serviceType;

- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:(id)a0;
- (id)processedSchema;
- (id)initWithModel:(id)a0 searchScene:(id)a1 useAsyncLoad:(BOOL)a2;
- (id)getAnnieXCardModel;
- (id)templateDataWithModel:(id)a0 shouldUseAnnieX:(BOOL)a1;
- (id)preDecodeStandAloneWithModel:(id)a0 lynxInitialData:(id)a1;
- (BOOL)p_enableSearchAnniexCDNFetcher;
- (void)p_setupAnniexCustomFetcherSequence:(id)a0;
- (BOOL)searchSceneSupportAutoUpdateTheme:(id)a0;
- (BOOL)supportAutoUpdateThemeEnable;
- (id)searchAnnieXModelWithModel:(id)a0;
- (id)AddPredecodeMarkForDictionary:(id)a0 useDecodeResult:(BOOL)a1;
- (void).cxx_destruct;
- (id)getSchema;

@end
