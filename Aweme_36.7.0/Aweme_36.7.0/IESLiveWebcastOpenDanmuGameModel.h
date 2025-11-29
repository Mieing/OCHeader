@class NSString;

@interface IESLiveWebcastOpenDanmuGameModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *appId;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
