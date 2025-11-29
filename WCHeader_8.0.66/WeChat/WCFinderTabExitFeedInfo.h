@class NSString;

@interface WCFinderTabExitFeedInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long expiredTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_expiredTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
