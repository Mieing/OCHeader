@interface RelaxFramework.SwiftReflectionHelper : NSObject

+ (id)allFieldOffsets:(id)a0;
+ (void)setIntField:(id)a0 :(long long)a1 :(long long)a2;
+ (void)setInt32Field:(id)a0 :(long long)a1 :(int)a2;
+ (void)setLongField:(id)a0 :(long long)a1 :(long long)a2;
+ (void)setBoolField:(id)a0 :(long long)a1 :(BOOL)a2;
+ (void)setDoubleField:(id)a0 :(long long)a1 :(double)a2;
+ (id)getField:(id)a0 :(id)a1;

- (id)init;

@end
