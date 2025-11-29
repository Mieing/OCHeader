@class NSString;

@interface AWEIMWatchOnceDataManager : NSObject <AWEIMWatchOnceDataManagerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchWatchOnceImageDetailInfo:(id)a0 complete:(id /* block */)a1;
+ (id)sharedInstance;

@end
