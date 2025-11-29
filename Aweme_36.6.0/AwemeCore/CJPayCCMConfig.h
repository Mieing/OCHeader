@class NSNumber, NSString;

@interface CJPayCCMConfig : JSONModel

@property (nonatomic) double tripActionTimeout;
@property (nonatomic) double prefetchCityDelayTime;
@property (nonatomic) BOOL needWaterMarker;
@property (nonatomic) double prefetchEntryGuideDelayTime;
@property (copy, nonatomic) NSNumber *openVerifyDelayTime;
@property (copy, nonatomic) NSNumber *openFinishGuideDelayTime;
@property (nonatomic) BOOL enableOpenPagePopGesture;
@property (copy, nonatomic) NSString *overrideRestoreSchema;
@property (copy, nonatomic) NSNumber *lynxPageRenderTimeout;
@property (nonatomic) BOOL disableEntryPageLynxMode;
@property (copy, nonatomic) NSString *entryPageLynxScheme;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
