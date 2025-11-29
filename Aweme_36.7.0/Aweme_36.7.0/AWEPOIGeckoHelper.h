@interface AWEPOIGeckoHelper : NSObject

+ (void)fetchResource:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
+ (BOOL)hasCacheForResource:(id)a0 channel:(id)a1;
+ (void)asyncGetDataForResource:(id)a0 channel:(id)a1 completion:(id /* block */)a2;

@end
