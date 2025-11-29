@interface AWEUGEventHandlerFactory : NSObject

+ (id)sharedFactory;

- (id)handlerForType:(unsigned long long)a0;
- (id)supportedTypes;

@end
