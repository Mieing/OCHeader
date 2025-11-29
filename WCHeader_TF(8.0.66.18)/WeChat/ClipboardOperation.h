@class SKBuiltinBuffer_t;

@interface ClipboardOperation : WXPBGeneratedMessage

@property (nonatomic) unsigned int operationType;
@property (retain, nonatomic) SKBuiltinBuffer_t *operationInfo;
@property (nonatomic) unsigned int operationContentLength;
@property (retain, nonatomic) SKBuiltinBuffer_t *extOperationInfo;

+ (void)initialize;

@end
