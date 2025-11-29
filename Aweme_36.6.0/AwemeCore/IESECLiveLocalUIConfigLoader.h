@class NSDictionary;

@interface IESECLiveLocalUIConfigLoader : NSObject <IESECLiveUIConfigLoader>

@property (retain, nonatomic) NSDictionary *localConfigDict;

- (id)getConfigJsonOfComponent:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
