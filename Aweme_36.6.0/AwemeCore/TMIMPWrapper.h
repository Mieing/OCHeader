@interface TMIMPWrapper : NSObject

@property (nonatomic) void /* function */ *imp;

- (id)initWithIMP:(void /* function */ *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
