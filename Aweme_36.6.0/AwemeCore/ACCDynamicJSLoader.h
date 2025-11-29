@interface ACCDynamicJSLoader : NSObject

@property (class, readonly, nonatomic) ACCDynamicJSLoader *shared;

@property BOOL isLoading;

- (void)startLoad;

@end
