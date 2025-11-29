@class NSString;

@interface TSPKAccessEntrySubscriber : NSObject <TSPKSubscriber>

@property (retain) NSString *appstatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationBecomeActive;
- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (void)startObserverAppStatus;
- (void)applicationBecomeInactive;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)init;

@end
