@interface IESLLPOILynxCellIdentifierBuilder : NSObject

+ (id)lynxCellIdentifierWithDynamicID:(long long)a0 index:(unsigned long long)a1;
+ (BOOL)isLynxCellIdentifier:(id)a0;
+ (long long)dynamicIdWithLynxCellIdentifier:(id)a0;

@end
