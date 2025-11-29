@class NSString;

@interface WCFinderFeedGroupWatcher : NSObject <WCFinderFeedArrayWatcherUpdatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchSnapshotChange:(id)a0 action:(SEL)a1;
+ (id)watchBatchUpdate:(id)a0 action:(SEL)a1;


@end
