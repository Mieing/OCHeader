@interface IESDPBDecoder : NSObject

+ (id)p_parseFromFields:(id)a0 withDefinitionConfig:(id)a1 definitionNode:(id)a2 shrinkConfig:(id)a3 shrinkNode:(id)a4 shouldCompleteIDLField:(BOOL)a5 numberToString:(BOOL)a6;
+ (id)p_parseFromDefaultExtraFields:(id)a0;
+ (long long)p_getLengthWithPropertyName:(id)a0 shrinkConfig:(id)a1 shrinkNode:(id)a2;
+ (id)p_shrinkValueWithRepeat:(BOOL)a0 length:(long long)a1 decodeArray:(id)a2;
+ (id)p_generateKeyValueShrinkNodeWithValueShrinkNode:(id)a0;
+ (id)p_generateKeyValueDefinitionNodeWithKeyNodeProperty:(id)a0 valueNodeProperty:(id)a1;
+ (id)parseFromModel:(id)a0;
+ (id)parseMessageFromModel:(id)a0;

@end
