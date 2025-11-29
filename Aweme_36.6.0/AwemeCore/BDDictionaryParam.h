@interface BDDictionaryParam : BDParam

- (id)valueToString;
- (id)stringToValue:(id)a0;
- (id)__decodeJsonValue:(id)a0 error:(id *)a1;
- (id)__encodeJsonString:(id *)a0;

@end
