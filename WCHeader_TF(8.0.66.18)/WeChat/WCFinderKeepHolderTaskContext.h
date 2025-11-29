@class NSString;

@interface WCFinderKeepHolderTaskContext : MMObject <PBCoding>

@property (nonatomic) double playedPosition;
@property (copy, nonatomic) NSString *nonceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_playedPosition;
+ (void)PBArrayAdd_nonceId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
