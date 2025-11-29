@class NSString;

@interface MagicCardIndexSystemReporterStruct : NSObject

@property (retain, nonatomic) NSString *bizScene;
@property (retain, nonatomic) NSString *bizSubScene;
@property (nonatomic) long long implType;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *extraJson;
@property (retain, nonatomic) NSString *traceId;

- (id)toString;
- (void).cxx_destruct;

@end
