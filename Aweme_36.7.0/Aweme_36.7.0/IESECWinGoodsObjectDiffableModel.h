@interface IESECWinGoodsObjectDiffableModel : IESECObjectWrapper <IGListDiffable>

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (Class)objectClass;
- (void)reset;
- (BOOL)isEqual:(id)a0;

@end
