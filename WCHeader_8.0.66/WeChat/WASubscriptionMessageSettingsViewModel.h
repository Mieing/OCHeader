@class NSArray, NSString, SubscribeMsgResp;

@interface WASubscriptionMessageSettingsViewModel : MMObject

@property (retain, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL dataReady;
@property (retain, nonatomic) SubscribeMsgResp *originRes;
@property (copy, nonatomic) NSString *detailTitle;
@property (nonatomic) BOOL globalSwitch;

- (id)initWithListResponse:(id)a0;
- (void)fillWithRes:(id)a0;
- (BOOL)dataChanged;
- (void)backToOrigin;
- (void)mergeWithResponse:(id)a0;
- (id)_mergeResponseWithOriginResponse:(id)a0 newResponse:(id)a1;
- (BOOL)globalSwitchDataChanged;
- (id)toMsgItemsArrayUpdated;
- (BOOL)itemsDataChanged;
- (id)generateItemsWith:(id)a0;
- (void).cxx_destruct;

@end
