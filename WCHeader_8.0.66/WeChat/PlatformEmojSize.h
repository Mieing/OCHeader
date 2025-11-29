@interface PlatformEmojSize : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long size;

+ (id)makeWithWidth:(long long)a0 height:(long long)a1 size:(long long)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
