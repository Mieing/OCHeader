@class NSMutableDictionary;
@protocol BDPURLLoaderProtocol;

@interface BDPURLInterceptorRegister : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedParsers;
@property (retain, nonatomic) id<BDPURLLoaderProtocol> loader;

+ (id)sharedInstance;

- (void)registerLoader:(id)a0;
- (id)parserWithScheme:(id)a0;
- (void)registerWithScheme:(id)a0 type:(unsigned long long)a1 parser:(id)a2;
- (id)parserWithScheme:(id)a0 type:(unsigned long long)a1;
- (id)cacheParserWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
