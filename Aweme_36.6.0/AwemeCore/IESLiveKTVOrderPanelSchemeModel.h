@class NSString;

@interface IESLiveKTVOrderPanelSchemeModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *applySource;
@property (nonatomic) long long firstLevelTab;
@property (copy, nonatomic) NSString *firstLevelTabSer;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
