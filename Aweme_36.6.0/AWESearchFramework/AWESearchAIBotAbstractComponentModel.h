@class NSDictionary, AWEAwemeModel;

@interface AWESearchAIBotAbstractComponentModel : AWESearchComponentBasicModel

@property (retain) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSDictionary *logExtra;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
