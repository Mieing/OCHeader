@class SKBuiltinBuffer_t;

@interface SnsObjectOp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) SKBuiltinBuffer_t *ext;

+ (void)initialize;

@end
