@interface WCFinderImgReportItem : NSObject

@property (nonatomic) unsigned long long comeWay;
@property (nonatomic) unsigned long long itemIdx;
@property (nonatomic) unsigned long long exposeStartTimeMS;
@property (nonatomic) unsigned long long stayTimeMS;
@property (nonatomic) BOOL hasZoomIn;
@property (nonatomic) BOOL hasPause;
@property (nonatomic) BOOL hasSpeedUp;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelPropertyBlacklistForConfigTag:(id)a0;
+ (void)convertBOOLToIntWithDict:(id)a0 key:(id)a1;
+ (void)convertAddOneIntWithDict:(id)a0 key:(id)a1;

- (BOOL)modelCustomTransformToDictionary:(id)a0 forConfigTag:(id)a1;

@end
