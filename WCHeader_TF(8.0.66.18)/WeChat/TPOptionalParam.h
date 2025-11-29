@class TPOptionalParamString, TPOptionalParamQueueInt, TPOptionalParamBool, TPOptionalParamQueueString, TPOptionalParamObject, TPOptionalParamFloat, TPOptionalParamLong;

@interface TPOptionalParam : NSObject

@property (retain, nonatomic) TPOptionalParamLong *paramLong;
@property (retain, nonatomic) TPOptionalParamFloat *paramFloat;
@property (retain, nonatomic) TPOptionalParamBool *paramBool;
@property (retain, nonatomic) TPOptionalParamString *paramString;
@property (retain, nonatomic) TPOptionalParamQueueInt *paramQueueInt;
@property (retain, nonatomic) TPOptionalParamQueueString *paramQueueString;
@property (retain, nonatomic) TPOptionalParamObject *paramObject;
@property (nonatomic) unsigned long long paramType;

+ (id)paramLongWithKey:(unsigned long long)a0 value:(long long)a1 param1:(long long)a2 param2:(long long)a3;
+ (id)paramFloatWithKey:(unsigned long long)a0 value:(float)a1 param1:(float)a2 param2:(float)a3;
+ (id)paramBoolWithKey:(unsigned long long)a0 value:(BOOL)a1 param1:(BOOL)a2 param2:(BOOL)a3;
+ (id)paramStringWithKey:(unsigned long long)a0 value:(id)a1 param1:(id)a2 param2:(id)a3;
+ (id)paramQueueIntWithKey:(unsigned long long)a0 value:(id)a1;
+ (id)paramQueueStringWithKey:(unsigned long long)a0 value:(id)a1;
+ (id)paramObjectWithkey:(unsigned long long)a0 value:(id)a1;

- (id)init;
- (unsigned long long)key;
- (long long)longValue;
- (long long)longParam1;
- (float)floatValue;
- (BOOL)boolValue;
- (id)stringValue;
- (id)queueIntValue;
- (id)queueStringValue;
- (id)objectValue;
- (id)description;
- (void).cxx_destruct;

@end
