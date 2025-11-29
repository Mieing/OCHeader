@class NSString;
@protocol AFDFullPageLongPressManagerProtocol, AFDPureModePageExitTransitionDelegate;

@interface AWEPureModeAlbumDetailCustomization : NSObject <AFDPureModeCustomizableProtocol, AFDPureModePageLongPressPanelDelegate>

@property (retain, nonatomic) id<AFDFullPageLongPressManagerProtocol> longPressManager;
@property (nonatomic) BOOL isFromFeed;
@property (nonatomic) BOOL albumPinchKeepScale;
@property (weak, nonatomic) id<AFDPureModePageExitTransitionDelegate> exitTransitionDelegate;
@property (nonatomic) BOOL albumPinchQuitOneStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pureModeExitTransitionDelegate;
- (BOOL)pinch_enableLongPressPanel;
- (id)pureModeLongPressPanelDelegate;
- (BOOL)pureModeAlbumPinchKeepScale;
- (BOOL)pureModeAlbumPinchQuitOneStep;
- (BOOL)pinch_shouldHandleDismissSelfWhenDislike;
- (BOOL)pinch_isLongPressPanelShowing;
- (void)pinch_showLongPressPanelWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
