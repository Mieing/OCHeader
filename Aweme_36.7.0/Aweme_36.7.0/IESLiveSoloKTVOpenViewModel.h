@class NSString;

@interface IESLiveSoloKTVOpenViewModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *viewName;
@property (copy, nonatomic) NSString *source;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
