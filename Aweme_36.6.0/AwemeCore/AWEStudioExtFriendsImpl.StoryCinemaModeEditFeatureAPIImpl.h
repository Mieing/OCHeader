@protocol ACCTopToolBarServiceProtocol, AWEStoryCinemaEditBottomBarAPI;

@interface AWEStudioExtFriendsImpl.StoryCinemaModeEditFeatureAPIImpl : NSObject <AWEStoryCinemaModeEditFeatureAPI> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolBar;
}

@property (nonatomic, retain) id<AWEStoryCinemaEditBottomBarAPI> bottomBar;
@property (nonatomic, retain) id<ACCTopToolBarServiceProtocol> toolBar;

- (void).cxx_destruct;
- (id)init;

@end
