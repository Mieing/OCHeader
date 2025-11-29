@class NSString;

@interface MegaVideoWatchLaterServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoWatchLaterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fetchData:(BOOL)a0 ignoreCache:(BOOL)a1 cleanUpExisting:(BOOL)a2 callback:(id /* block */)a3;
- (void)modifyFeedWatchLaterStatus:(id)a0 params:(id)a1 commentScene:(int)a2 callback:(id /* block */)a3;
- (void)localFeeds:(int)a0 callback:(id /* block */)a1;
- (id)localFeed:(id)a0;
- (BOOL)isInLocalFeeds:(id)a0;
- (void)clearAllLocalFeeds;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;

@end
