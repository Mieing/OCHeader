@class NSString, NSData, NSMutableArray, FlutterFuncEngineParamsMap;

@interface FlutterFuncEngineParamsItem : WXPBGeneratedMessage

@property (nonatomic) int valueType;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) long long longValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) float floatValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) NSMutableArray *arrayValue;
@property (retain, nonatomic) FlutterFuncEngineParamsMap *mapValue;

+ (void)initialize;

@end
