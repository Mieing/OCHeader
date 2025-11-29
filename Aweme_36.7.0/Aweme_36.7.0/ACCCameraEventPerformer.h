@interface ACCCameraEventPerformer : NSObject

@property (nonatomic) SEL aSelector;
@property (copy, nonatomic) id /* block */ realPerformer;

+ (id)performerWithSEL:(SEL)a0 performer:(id /* block */)a1;

- (void).cxx_destruct;
- (BOOL)validate;

@end
