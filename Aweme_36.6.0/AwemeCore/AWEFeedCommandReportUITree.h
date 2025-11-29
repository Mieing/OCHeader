@class NSString;

@interface AWEFeedCommandReportUITree : NSObject <AWECustomCommandHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (id)cloudCommandIdentifier;
+ (void)uploadViewHierarchyWithRecordID:(id)a0 channel:(id)a1;
+ (void)recordViewHierarchyForWindow:(id)a0 needDetail:(BOOL)a1;
+ (id)sharedInstance;

- (void)excuteCommandWithParams:(id)a0 completion:(id /* block */)a1;
- (void)setup;

@end
