@interface DTJsonDecoderMXXT : NSObject

+ (id)decoder;

- (id)decodeWithClass:(Class)a0 elementClass:(Class)a1 fromJSONString:(id)a2;
- (id)decodeWithClassName:(id)a0 elementClass:(Class)a1 fromJSONObject:(id)a2;
- (id)decodeWithClass:(Class)a0 elementClass:(Class)a1 fromJSONObject:(id)a2;
- (id)decodeArrayWithElementClass:(Class)a0 fromJSONObject:(id)a1;
- (id)decodeDictionaryWithElementClass:(Class)a0 fromJSONObject:(id)a1;
- (id)decodeObjectOfClass:(Class)a0 fromJSONObject:(id)a1;
- (void)setupObject:(id)a0 ofClass:(Class)a1 lookupDictionary:(id)a2;
- (void)setProperty:(struct objc_property { } *)a0 ofObject:(id)a1 lookupDictionary:(id)a2;
- (void)setNumberValue:(id)a0 toProperty:(id)a1 ofObject:(id)a2 convertSelector:(SEL)a3;
- (void)setStringValue:(id)a0 toProperty:(id)a1 ofObject:(id)a2;
- (void)setDateValue:(id)a0 toProperty:(id)a1 ofObject:(id)a2;

@end
