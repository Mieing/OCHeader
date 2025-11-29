@class NSString, BachIOSResourceFinder;

@interface BachSystem : NSObject <NSObject>

@property struct BachAlgorithmSystem { void /* function */ **x0; } *m_system;
@property (retain) BachIOSResourceFinder *m_finder;
@property BOOL isDestroyed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toFaceOCResult:(id)a0;
+ (id)toExpressionOCResult:(id)a0;

- (long long)setIntParams:(id)a0 intParams:(id)a1;
- (id)getResult:(id)a0;
- (long long)initGraph:(id)a0;
- (id)getResult:(id)a0 outputIndex:(int)a1;
- (long long)initGraphWithRootPath:(id)a0 rootPath:(id)a1;
- (void)setBachCacheEnable:(BOOL)a0;
- (long long)enable:(id)a0 is_enable:(BOOL)a1;
- (long long)setFloatParams:(id)a0 floatParams:(id)a1;
- (long long)setStringParams:(id)a0 stringParams:(id)a1;
- (long long)execute:(id)a0;
- (void).cxx_destruct;
- (void)destroy;
- (id)initWithConfig:(id)a0;

@end
