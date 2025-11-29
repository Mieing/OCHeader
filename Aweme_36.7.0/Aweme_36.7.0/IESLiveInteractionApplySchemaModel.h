@class NSString;

@interface IESLiveInteractionApplySchemaModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *applySource;
@property (nonatomic) long long applyType;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
