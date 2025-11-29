@class LynxComponentScopeRegistry;
@protocol LynxGenericResourceFetcher, LynxMediaResourceFetcher, LynxResourceFetcher, RelaxUIRendererProtocol;

@interface RelaxViewBuilder : NSObject <NSCopying>

@property (retain, nonatomic) id<RelaxUIRendererProtocol> relaxUIRenderer;
@property (retain, nonatomic) id componentRegistry;
@property (nonatomic) long long renderMode;
@property (nonatomic) BOOL autoCreateRuntimeContext;
@property (nonatomic) BOOL isSyncCreateRuntime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) BOOL enableAutoExpose;
@property (nonatomic) BOOL enableTextNonContiguousLayout;
@property (nonatomic) BOOL enableLayoutOnly;
@property (nonatomic) BOOL enableAsyncLayout;
@property (retain, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (retain, nonatomic) id<LynxGenericResourceFetcher> genericResourceFetcher;
@property (retain, nonatomic) id<LynxMediaResourceFetcher> mediaResourceFetcher;
@property (retain, nonatomic) LynxComponentScopeRegistry *componentRegistry;

- (void)registerUI:(Class)a0 withName:(id)a1;
- (void)registerShadowNode:(Class)a0 withName:(id)a1;
- (void).cxx_destruct;
- (void)build;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
