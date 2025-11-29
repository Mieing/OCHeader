@class NSString, SKBuiltinBuffer_t;

@interface WxUserIdcInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) SKBuiltinBuffer_t *extInfo;

+ (void)initialize;

- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setUuid:(id)a0;
- (id)uuid;

@end
