@class NSString, NSMutableDictionary;
@protocol IESECLiveAudienceAccessService;

@interface AWEECShopLiveRoomAccessServiceManager : NSObject <IESECShopLiveRoomAccessServiceManager> {
    id<IESECLiveAudienceAccessService> _accessService;
    BOOL _accessServiceConfigurable;
}

@property (retain, nonatomic) NSMutableDictionary *ecomBusinessParams;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (id)serviceConfig;
- (void)updateEnterMethod:(id)a0;
- (void)setupAccessServiceConfig;
- (void)updateSchemaQueryParams:(id)a0;
- (void)updateContextParams:(id)a0;
- (void)updateProfileView:(id)a0 backView:(id)a1 tipsView:(id)a2 bottomBarView:(id)a3 containerTopOffset:(double)a4 backLeftOffset:(double)a5;
- (double)liveStatusHeight;
- (id)initWithAccessService:(id)a0;
- (void).cxx_destruct;

@end
