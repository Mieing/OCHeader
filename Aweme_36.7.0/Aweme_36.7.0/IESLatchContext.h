@protocol IESLatchMonitorProtocol, IESLatchJSDataProviderProtocol;

@interface IESLatchContext : NSObject

@property (retain, nonatomic) id<IESLatchJSDataProviderProtocol> jsDataProvider;
@property (retain, nonatomic) id<IESLatchMonitorProtocol> monitor;

- (void).cxx_destruct;

@end
