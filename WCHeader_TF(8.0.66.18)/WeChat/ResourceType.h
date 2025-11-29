@class NSMutableArray;

@interface ResourceType : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSMutableArray *resources;

+ (void)initialize;

- (void)setResources:(id)a0;
- (id)resources;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
