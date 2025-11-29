@class NSString;

@interface AWEMVFluidityOptimizeConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableCellSizeCache;
@property (nonatomic) BOOL enableSuspendScatterTaskWhenScrolling;
@property (nonatomic) BOOL enableScatterTrack;
@property (nonatomic) BOOL enableScatterLog;
@property (nonatomic) BOOL enableIconReuse;
@property (nonatomic) BOOL enableEventDispatcherPreloadCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
