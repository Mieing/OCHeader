@interface AWESwizzleInfo : NSObject

@property (copy, nonatomic) id /* block */ impProviderBlock;
@property (nonatomic) SEL selector;

- (void /* function */ *)getOriginalImplementation;
- (void).cxx_destruct;

@end
