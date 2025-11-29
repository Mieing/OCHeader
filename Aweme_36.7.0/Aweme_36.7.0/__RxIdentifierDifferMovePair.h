@class NSString;

@interface __RxIdentifierDifferMovePair : NSObject <__RxIdentifierDifferMovePair, NSCopying>

@property (readonly, nonatomic) unsigned long long fromIndex;
@property (readonly, nonatomic) unsigned long long toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;

@end
