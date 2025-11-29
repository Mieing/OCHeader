@interface FinderAsyncPostConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL disableAsyncPost;
@property (nonatomic) unsigned int maxConfirmSeconds;

+ (void)initialize;

- (void)setMaxConfirmSeconds:(unsigned int)a0;
- (unsigned int)maxConfirmSeconds;
- (void)setDisableAsyncPost:(BOOL)a0;
- (BOOL)disableAsyncPost;

@end
