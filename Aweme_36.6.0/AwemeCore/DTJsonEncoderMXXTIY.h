@class NSMutableString;

@interface DTJsonEncoderMXXTIY : NSObject

@property (retain, nonatomic) NSMutableString *JSONRepresentation;

+ (id)normalizePropertyName:(id)a0;
+ (void)initialize;
+ (id)encoder;

- (void)encodeObject:(id)a0 ofClass:(Class)a1 recusive:(BOOL)a2;
- (id)jsonValueFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)encodeObject:(id)a0;
- (void)encodeDictionary:(id)a0;
- (void)encodeArray:(id)a0;

@end
