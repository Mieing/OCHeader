@class NSString;

@interface IESLiveWebcastOpenLiveModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *sourceParams;
@property (nonatomic) BOOL recordTabOnly;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *shootWay;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
