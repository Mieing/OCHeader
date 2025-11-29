@interface CSJSize : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;

+ (id)sizeBy:(long long)a0;

- (id)dictionaryValue;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
