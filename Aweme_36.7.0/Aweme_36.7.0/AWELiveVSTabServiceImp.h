@class NSString;

@interface AWELiveVSTabServiceImp : NSObject <AWELiveVSTabService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)vsTabName;
- (id)createVSTabViewController;
- (void)performAppendVSTab:(id /* block */)a0;
- (void)performLayoutFeedSegmentControl:(id /* block */)a0;
- (BOOL)vsTabIsShowRightSideOfNearBy;
- (BOOL)vsTabIsShowLeftSideOfNearBy;

@end
