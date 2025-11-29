@class NSString, NSBundle;

@interface BCAABundleModel : NSObject <NSCopying>

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *fromBundle;
@property (retain, nonatomic) NSString *enterTag;
@property (nonatomic) BOOL isActive;
@property (nonatomic) double load_cost_time;
@property (nonatomic) double active_cost_time;
@property (nonatomic) BOOL hasBroadcastPreloadEnter;
@property (nonatomic) struct __CFBundle { } *bundleRef;

- (id)initWithBundle:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
