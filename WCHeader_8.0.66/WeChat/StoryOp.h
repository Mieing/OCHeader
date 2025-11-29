@class SKBuiltinBuffer_t;

@interface StoryOp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) SKBuiltinBuffer_t *opContent;

+ (void)initialize;

@end
