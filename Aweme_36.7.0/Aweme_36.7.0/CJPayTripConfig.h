@class NSNumber, CJPayTripSideBarConfig;

@interface CJPayTripConfig : JSONModel

@property (copy, nonatomic) NSNumber *mapAreaSkeletonTimeoutTime;
@property (retain, nonatomic) CJPayTripSideBarConfig *sideBarConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
