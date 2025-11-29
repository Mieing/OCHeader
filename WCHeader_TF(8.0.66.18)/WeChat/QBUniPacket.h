@class QBUniAttribute;

@interface QBUniPacket : QBRequestPacket

@property (readonly, nonatomic) QBUniAttribute *attributes;

+ (id)packet;

- (id)init;
- (id)description;
- (id)objectKeyWithName:(id)a0;
- (void)__pack:(id)a0;
- (void)__unpack:(id)a0;
- (id)getObjectAttr:(id)a0 forClass:(Class)a1;
- (void)putDataAttr:(id)a0 value:(id)a1;
- (void)putObjectAttr:(id)a0 type:(id)a1 value:(id)a2;
- (void)putObjectAttr:(id)a0 value:(id)a1;
- (long long)getReturnCode;
- (void).cxx_destruct;

@end
