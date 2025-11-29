@class NSString;

@interface IESLiveTalkMatchSchemaModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *tabSource;
@property (copy, nonatomic) NSString *sourcePage;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
