@class HTSEventContext, _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelSetting, HTSLiveMyAssetsStore, IESLiveGiftAlClientStrategyCenter, HTSLiveGivingServiceWrapper, NSDate, NSString, _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelTracker, IESLiveRefactGiftPanelViewBuilderLayoutInfo;
@protocol IESLiveDIContext, IESLiveRoomService;

@interface IESLiveRevenueImpl.IESLiveRebornGiftPanelContext : NSObject {
    void /* function */ giftPanelShowTime;
    void /* function */ panelSessionId;
}

@property (nonatomic, readonly) id<IESLiveDIContext> diContext;
@property (nonatomic, readonly) IESLiveRefactGiftPanelViewBuilderLayoutInfo *layoutInfo;
@property (nonatomic, readonly) HTSEventContext *trackContext;
@property (nonatomic, readonly) id<IESLiveRoomService> room;
@property (nonatomic, readonly) _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelSetting *setting;
@property (nonatomic, readonly) HTSLiveMyAssetsStore *assetsStore;
@property (nonatomic, readonly) HTSLiveGivingServiceWrapper *giftRequestServiceWrapper;
@property (nonatomic, readonly) IESLiveGiftAlClientStrategyCenter *aiService;
@property (nonatomic, readonly) _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelTracker *rebornTracker;
@property (nonatomic, readonly) NSDate *giftPanelShowTime;
@property (nonatomic, readonly) NSString *panelSessionId;

- (id)initWithDiContext:(id)a0 layoutInfo:(id)a1 trackContext:(id)a2 room:(id)a3 assetsStore:(id)a4 giftRequestServiceWrapper:(id)a5 aiService:(id)a6 configuration:(id)a7;
- (void).cxx_destruct;
- (id)init;

@end
