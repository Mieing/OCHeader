@interface SceneControl : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int preloadLimit;

+ (void)initialize;

- (void)setPreloadLimit:(unsigned int)a0;
- (unsigned int)preloadLimit;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;

@end
