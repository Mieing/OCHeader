@class NSDictionary;

@interface IESECLiveComponentUIConfigs : NSObject

@property (retain, nonatomic) NSDictionary *uiConfigDict;

- (id)tryGetConfigForComponent:(id)a0;
- (id)configForComponent:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDict:(id)a0;

@end
