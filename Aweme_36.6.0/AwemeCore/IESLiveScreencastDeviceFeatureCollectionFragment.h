@class IESLiveScreencastDeviceFeatureCollectionStore;

@interface IESLiveScreencastDeviceFeatureCollectionFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveScreencastDeviceFeatureCollectionStore *store;

- (void)componentCreate;
- (void)componentMount;
- (void)componentWillDisappear;
- (void)bindXLiveObserveActions;
- (void)collectDeviceFeatureIfNeed;
- (void).cxx_destruct;

@end
