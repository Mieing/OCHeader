@class NSString;

@interface IESWebcastKtvChallengeModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *sourceParams;
@property (nonatomic) BOOL shouldStart;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
