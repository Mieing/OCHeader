@class NSMutableArray;

@interface ResourceTypeReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSMutableArray *subTypeVector;

+ (void)initialize;

- (void)setSubTypeVector:(id)a0;
- (id)subTypeVector;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
