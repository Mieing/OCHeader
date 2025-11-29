@class NSString;
@protocol AWEBottomContainerTrackLynxTapDelegate, AWEBottomContainerViewLifeCycleDelegate;

@interface AWENewPlayletBottomBarView : AWENewPlayletBottomContainerBaseView <AWEDiscoverDBottomBarViewProtocol>

@property (weak, nonatomic) id<AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (weak, nonatomic) id<AWEBottomContainerTrackLynxTapDelegate> trackLynxTapDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowEvent;
- (void)updateRawData:(id)a0 extraParams:(id)a1 inController:(id)a2;
- (void)updateEnterModelWithAwemeModel:(id)a0 referString:(id)a1;
- (id)templateURL;

@end
