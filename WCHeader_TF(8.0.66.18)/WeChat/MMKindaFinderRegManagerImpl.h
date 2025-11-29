@class NSString;

@interface MMKindaFinderRegManagerImpl : NSObject <MMKindaFinderRegManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startFinderFeeds:(id)a0 nonceid:(id)a1;
- (void)startFinderProfile:(id)a0;

@end
