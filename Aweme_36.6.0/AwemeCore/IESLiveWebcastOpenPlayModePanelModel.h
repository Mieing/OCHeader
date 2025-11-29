@class NSString;

@interface IESLiveWebcastOpenPlayModePanelModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long matchType;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
