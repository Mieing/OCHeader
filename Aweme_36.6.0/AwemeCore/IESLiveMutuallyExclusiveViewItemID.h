@class NSMutableSet;

@interface IESLiveMutuallyExclusiveViewItemID : NSObject <NSCopying> {
    NSMutableSet *_identifiers;
}

@property (nonatomic) unsigned long long tag;

- (id)initWithIdentifierSet:(id)a0;
- (id)identifiers;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifiers:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
