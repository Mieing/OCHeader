@class NSString;

@interface IESLiveOpenPKDetailPanelSchemaModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long detailBattleModType;
@property (nonatomic) long long detailConnectType;
@property (nonatomic) long long detailPanelHeight;
@property (copy, nonatomic) NSString *detailPlayType;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
