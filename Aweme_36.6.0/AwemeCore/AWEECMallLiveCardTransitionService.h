@class NSString;
@protocol AWEECMallLiveCardTransitionDataSource;

@interface AWEECMallLiveCardTransitionService : NSObject <AWELiveRoomMessage, AWEECMallGoodsDetailZoomOuterContextProvider, AWEECMallLiveCardTransitionProtocol>

@property (weak, nonatomic) id<AWEECMallLiveCardTransitionDataSource> liveCardCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveCardTransitionWithDataSource:(id)a0;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (void)registerMessage;
- (void)unregisterMessage;
- (void)transitionTransferToURLString:(id)a0;
- (void).cxx_destruct;

@end
