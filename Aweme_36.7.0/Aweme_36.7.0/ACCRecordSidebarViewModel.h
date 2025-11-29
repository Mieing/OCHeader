@class NSString;

@interface ACCRecordSidebarViewModel : NSObject <ACCRecordSidebarService>

@property (nonatomic) long long keepSidebarVisiableCount;
@property (nonatomic) BOOL shouldShowItemsForPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendToKeepSidebarVisiableList:(id)a0;
- (void)removeFromKeepSidebarVisiableList;
- (BOOL)shouldForceSidebarVisiable;

@end
