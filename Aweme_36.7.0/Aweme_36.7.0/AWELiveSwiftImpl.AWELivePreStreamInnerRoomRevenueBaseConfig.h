@class AWEAwemeModel, HTSLivePreviewExposeData_PortraitData;

@interface AWELiveSwiftImpl.AWELivePreStreamInnerRoomRevenueBaseConfig : NSObject <AWELivePreStreamInnerRoomDisplayConfigProtocol> {
    void /* unknown type, empty encoding */ displayManager;
    void /* unknown type, empty encoding */ startTimer;
    void /* unknown type, empty encoding */ showTimer;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ actionBlock;
    void /* unknown type, empty encoding */ isDisplaying;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
}

@property (nonatomic, readonly) HTSLivePreviewExposeData_PortraitData *portraitData;
@property (nonatomic) BOOL isClickedArea;
@property (nonatomic) BOOL enoughTime;
@property (nonatomic, retain) AWEAwemeModel *model;

- (id)bizType;
- (unsigned long long)promotionType;
- (void)didStartTimer;
- (BOOL)checkRelationship;
- (void)didEndTimer;
- (id)tips;
- (void)startCountDownTimerIfNeeded:(id /* block */)a0;
- (void)onUserQuitLiveRoom:(id)a0;
- (id)enterRoomParams;
- (id)enterRoomBuriedParams;
- (id)enterRoomBussinessParams;
- (id)enterFirstRoomParams;
- (id)enterClickRoomParams;
- (void)reset;
- (id)initWithModel:(id)a0 displayManager:(id)a1 context:(id)a2;
- (void)showRevenueViewIfNeed;
- (void)checkElementPriority;
- (id)externalUrl;
- (void).cxx_destruct;
- (id)init;

@end
