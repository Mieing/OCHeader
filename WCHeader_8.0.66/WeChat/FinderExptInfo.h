@class NSMutableArray;

@interface FinderExptInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *container;
@property (nonatomic) unsigned int cmdid;

+ (void)initialize;

- (void)setCmdid:(unsigned int)a0;
- (unsigned int)cmdid;
- (void)setContainer:(id)a0;
- (id)container;

@end
