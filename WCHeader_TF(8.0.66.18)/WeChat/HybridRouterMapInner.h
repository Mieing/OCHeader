@class NSString, NSData, HybridRouterMap, NSMutableArray;

@interface HybridRouterMapInner : WXPBGeneratedMessage

@property (nonatomic) int valueType;
@property (nonatomic) long long intValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) HybridRouterMap *mapValue;
@property (retain, nonatomic) NSMutableArray *listValue;

+ (void)initialize;

@end
