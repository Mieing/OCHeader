@class NSString, NSData;

@interface FlutterFuncCallBaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *funcName;
@property (retain, nonatomic) NSString *engineId;
@property (retain, nonatomic) NSData *body;

+ (void)initialize;

- (void)setBody:(id)a0;
- (id)body;
- (void)setEngineId:(id)a0;
- (id)engineId;
- (void)setFuncName:(id)a0;
- (id)funcName;

@end
