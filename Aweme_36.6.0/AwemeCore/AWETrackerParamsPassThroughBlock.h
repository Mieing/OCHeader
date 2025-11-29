@class AWETrackerDataTransmissionBlockConfig, NSMutableSet, NSDictionary;

@interface AWETrackerParamsPassThroughBlock : NSObject <NSCopying> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _block_mutex_lock;
}

@property (retain, nonatomic) NSMutableSet *overrideKeyWhiteList;
@property (retain, nonatomic) AWETrackerDataTransmissionBlockConfig *config;
@property (nonatomic) BOOL shouldEnableParamsOverride;
@property (copy, nonatomic) NSDictionary *applyComparedResultCache;
@property (nonatomic) double applyDurationCache;
@property (nonatomic) double applyTimeStamp;

+ (id)initWithConfig:(id)a0;

- (void)applyBlockWithEvent:(id)a0 params:(id)a1 trackerContext:(id)a2;
- (void)didAttachToObj:(id)a0 fromInfo:(id)a1;
- (void)enableParamsOverrideForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
