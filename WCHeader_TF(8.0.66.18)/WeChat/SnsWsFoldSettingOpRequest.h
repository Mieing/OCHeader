@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface SnsWsFoldSettingOpRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) SKBuiltinBuffer_t *wssessionBuf;
@property (retain, nonatomic) NSString *targetUsername;

+ (void)initialize;

@end
