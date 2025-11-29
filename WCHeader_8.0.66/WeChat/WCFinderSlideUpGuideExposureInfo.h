@class NSString;

@interface WCFinderSlideUpGuideExposureInfo : NSObject <PBCoding>

@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long exposureTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_exposureTime;
+ (void)initialize;

- (BOOL)isEqual:(id)a0;
- (id)getPBPropertyTable;

@end
