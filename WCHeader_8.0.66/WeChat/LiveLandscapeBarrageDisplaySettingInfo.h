@class NSString;

@interface LiveLandscapeBarrageDisplaySettingInfo : NSObject <PBCoding>

@property (nonatomic) BOOL enableDisplayBarrageStyle;
@property (nonatomic) double barrageDisplayRange;
@property (nonatomic) double barrageDisplayAlpha;
@property (nonatomic) BOOL enableDisplayBarrageStyleNew;
@property (nonatomic) int enableDisplayBarrageStyleTagV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enableDisplayBarrageStyle;
+ (void)PBArrayAdd_barrageDisplayRange;
+ (void)PBArrayAdd_barrageDisplayAlpha;
+ (void)PBArrayAdd_enableDisplayBarrageStyleNew;
+ (void)PBArrayAdd_enableDisplayBarrageStyleTagV2;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
