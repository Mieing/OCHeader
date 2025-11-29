@class SKBuiltinString_t;

@interface SnsADObjectOpDeleteComment : WXPBGeneratedMessage

@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) SKBuiltinString_t *snsAduxInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) SKBuiltinString_t *snsStatExt;

+ (void)initialize;

@end
