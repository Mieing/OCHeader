@class NSString;

@interface SECHybridPluginPerfEvent : SECHybridBaseEvent

@property (copy, nonatomic) NSString *pluginType;
@property (copy, nonatomic) NSString *aspectName;
@property (copy, nonatomic) NSString *entryName;
@property (copy, nonatomic) NSString *phase;
@property (copy, nonatomic) NSString *plugin;
@property (copy, nonatomic) id /* block */ perfMetrics;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
