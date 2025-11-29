@class NSString;

@interface IESWebcastLinkPanelModel : IESLiveWebcastBaseModel

@property (nonatomic) long long openPanelType;
@property (copy, nonatomic) NSString *platformActivityId;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
