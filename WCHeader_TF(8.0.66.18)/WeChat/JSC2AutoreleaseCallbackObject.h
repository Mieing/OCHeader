@interface JSC2AutoreleaseCallbackObject : NSObject

@property (nonatomic) void /* function */ *callback;

+ (id)valueWithCallback:(void /* function */ *)a0;

- (void)dealloc;

@end
