@class NSString;

@interface AWESearchTagBackgroudImageTransformer : NSObject <AWEWebImageTransformProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTransformer;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;

@end
