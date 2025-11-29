@class GXCache;

@interface GXCacheCenter : NSObject

@property (retain, nonatomic) GXCache *regularCahche;
@property (retain, nonatomic) GXCache *templateCahche;
@property (retain, nonatomic) GXCache *expressionCahche;

+ (id)defaulCenter;

- (void).cxx_destruct;

@end
