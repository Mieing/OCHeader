@class NSString, SKBuiltinBuffer_t;

@interface VUserResponseItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int id;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) SKBuiltinBuffer_t *icon;
@property (retain, nonatomic) SKBuiltinBuffer_t *hdicon;

+ (void)initialize;

@end
