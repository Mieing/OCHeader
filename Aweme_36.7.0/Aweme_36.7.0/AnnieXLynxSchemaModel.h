@class NSString, NSNumber, NSArray;

@interface AnnieXLynxSchemaModel : NSObject <BDSchemaModelProtocol>

@property (copy, nonatomic) NSString *durl;
@property (retain, nonatomic) NSNumber *disableAutoExpose;
@property (nonatomic) BOOL disableJsCtxShare;
@property (nonatomic) BOOL disableShare;
@property (nonatomic) BOOL enableCanvas;
@property (retain, nonatomic) NSNumber *enableCanvasOptimization;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *initialData;
@property (nonatomic) double lynxPresetHeight;
@property (nonatomic) double lynxPresetWidth;
@property (nonatomic) BOOL presetSafePoint;
@property (nonatomic) long long threadStrategy;
@property (nonatomic) BOOL prefetchToGlobalProps;
@property (nonatomic) BOOL enableAirStrictMode;
@property (nonatomic) unsigned long long airActionStrategy;
@property (nonatomic) BOOL useMotion;
@property (nonatomic) BOOL useKTX2Transcoder;
@property (copy, nonatomic) NSString *predefine;
@property (copy, nonatomic) NSString *predefineConfig;
@property (nonatomic) BOOL enableAnimaX;
@property (nonatomic) BOOL useStorageGroup;
@property (nonatomic) BOOL enableElementTreeReuse;
@property (nonatomic) BOOL appendCommonParams;
@property (retain, nonatomic) NSArray *appendGlobalProps;
@property (nonatomic) BOOL enableLynxInitDataDeepClone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
