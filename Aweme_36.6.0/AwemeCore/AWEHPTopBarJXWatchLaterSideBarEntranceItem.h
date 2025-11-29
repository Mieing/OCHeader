@class NSString;

@interface AWEHPTopBarJXWatchLaterSideBarEntranceItem : AWEHPTopBarBaseEntranceItem <AWELeftSideBarEntranceViewModelProtocol, AWEHPTopBarEntranceItemProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)entranceShouldShow;
+ (Class)aAWEJXWatchLaterSidebarAdapterClass;
+ (id)entranceBizID;

- (unsigned long long)entranceType;
- (id)entranceView;
- (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:(id)a0;
- (id)aAWEJXWatchLaterSidebarAdapter;
- (double)awe_DUXFloat:(double)a0;
- (struct CGSize { double x0; double x1; })entranceSize;
- (void)loadEntranceView;
- (void)topBarLeftContainerHideChange:(BOOL)a0;
- (void)topBarLeftContainerAlphaChange:(double)a0;
- (void)entranceWillAppear;
- (void)entranceDidAppear;
- (void)entranceWillDisappear;
- (void)entranceDidDisappear;

@end
