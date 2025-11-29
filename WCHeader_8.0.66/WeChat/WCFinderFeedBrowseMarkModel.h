@class NSString;

@interface WCFinderFeedBrowseMarkModel : NSObject <PBCoding>

@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) long long startWatchingTs;
@property (nonatomic) long long endWatchingTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_startWatchingTs;
+ (void)PBArrayAdd_endWatchingTs;
+ (void)initialize;

- (id)getPBPropertyTable;
- (long long)lastPlayInterval;
- (void).cxx_destruct;

@end
