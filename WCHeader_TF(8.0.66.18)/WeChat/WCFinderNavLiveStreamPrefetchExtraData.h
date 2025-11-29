@class NSString;

@interface WCFinderNavLiveStreamPrefetchExtraData : NSObject <PBCoding>

@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_scene;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isEqual:(id)a0;

@end
