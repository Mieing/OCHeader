@interface FinderJustWatchControl : WXPBGeneratedMessage

@property (nonatomic) BOOL showJustWatch;
@property (nonatomic) BOOL allowPrefetch;
@property (nonatomic) BOOL newShowJustWatch;

+ (void)initialize;

- (void)setNewShowJustWatch:(BOOL)a0;
- (BOOL)newShowJustWatch;
- (void)setAllowPrefetch:(BOOL)a0;
- (BOOL)allowPrefetch;
- (void)setShowJustWatch:(BOOL)a0;
- (BOOL)showJustWatch;

@end
