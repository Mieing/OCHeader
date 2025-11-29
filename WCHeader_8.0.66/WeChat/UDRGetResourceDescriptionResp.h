@class NSMutableArray;

@interface UDRGetResourceDescriptionResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *resources;
@property (nonatomic) int ret;
@property (nonatomic) unsigned int projectBlockTime;

+ (void)initialize;

- (void)setProjectBlockTime:(unsigned int)a0;
- (unsigned int)projectBlockTime;
- (void)setRet:(int)a0;
- (int)ret;
- (void)setResources:(id)a0;
- (id)resources;

@end
