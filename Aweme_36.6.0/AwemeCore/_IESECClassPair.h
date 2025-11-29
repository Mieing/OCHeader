@interface _IESECClassPair : NSObject <NSCopying> {
    unsigned long long _cachedHash;
}

@property (retain, nonatomic) Class first;
@property (retain, nonatomic) Class second;

+ (id)pairWithClass:(Class)a0 anotherClass:(Class)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
