@class SKBuiltinBuffer_t;

@interface FavSyncRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int selector;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;

+ (void)initialize;

@end
