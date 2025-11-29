@class NSString, NSDictionary, _TtC18IESLiveRevenueImpl23IESLiveTreasureClashAPI, HTSLiveToolbarItem;

@interface IESLiveTreasureClashSwiftFragment : IESLiveRoomComponent {
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolBarConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolBarItem;
    void /* function */ schema;
}

@property (nonatomic, readonly) _TtC18IESLiveRevenueImpl23IESLiveTreasureClashAPI *api;
@property (nonatomic) BOOL didDisplay;
@property (nonatomic, copy) NSDictionary *toolBarConfig;
@property (nonatomic, retain) HTSLiveToolbarItem *toolBarItem;
@property (nonatomic, copy) NSString *schema;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)checkInsertToolBar;
- (void)showToolBar;
- (void)tapToolBar;
- (void)trackToolBarDisplay;
- (void)trackToolBarTap;
- (void).cxx_destruct;
- (id)init;

@end
