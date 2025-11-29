@class BDIntegerParam, BDStringParam, BDDoubleParam, NSString, BDBooleanParam;

@interface BDXLynxKitModel : NSObject <BDSchemaModelProtocol>

@property (retain, nonatomic) BDStringParam *bundle;
@property (retain, nonatomic) BDStringParam *channel;
@property (retain, nonatomic) BDStringParam *durl;
@property (retain, nonatomic) BDBooleanParam *disableAutoExpose;
@property (retain, nonatomic) BDBooleanParam *disableJsCtxShare;
@property (retain, nonatomic) BDBooleanParam *disableShare;
@property (retain, nonatomic) BDIntegerParam *dynamic;
@property (retain, nonatomic) BDStringParam *geckoUpdatePolicy;
@property (retain, nonatomic) BDBooleanParam *enableCanvas;
@property (retain, nonatomic) BDBooleanParam *enableCanvasOptimization;
@property (retain, nonatomic) BDBooleanParam *enableAnimaX;
@property (retain, nonatomic) BDStringParam *group;
@property (retain, nonatomic) BDStringParam *initialData;
@property (retain, nonatomic) BDDoubleParam *lynxPresetHeight;
@property (retain, nonatomic) BDDoubleParam *lynxPresetWidth;
@property (retain, nonatomic) BDBooleanParam *presetSafePoint;
@property (retain, nonatomic) BDStringParam *surl;
@property (retain, nonatomic) BDIntegerParam *threadStrategy;
@property (retain, nonatomic) BDBooleanParam *enableAirStrictMode;
@property (retain, nonatomic) BDStringParam *url;
@property (retain, nonatomic) BDBooleanParam *prefetchToGlobalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
