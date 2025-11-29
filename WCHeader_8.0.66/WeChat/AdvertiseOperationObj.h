@class SKBuiltinBuffer_t, AdvertiseObject;

@interface AdvertiseOperationObj : WXPBGeneratedMessage

@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) SKBuiltinBuffer_t *extBuf;
@property (retain, nonatomic) AdvertiseObject *replaceAdObj;
@property (nonatomic) unsigned int replaceLevel;

+ (void)initialize;

@end
