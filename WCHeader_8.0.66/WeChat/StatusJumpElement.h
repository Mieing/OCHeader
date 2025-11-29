@class NSString, NSMutableArray;

@interface StatusJumpElement : WXPBGeneratedMessage

@property (nonatomic) unsigned int elementType;
@property (retain, nonatomic) NSString *elementKey;
@property (retain, nonatomic) NSMutableArray *jumpInfos;

+ (void)initialize;

- (void)setJumpInfos:(id)a0;
- (id)jumpInfos;
- (void)setElementKey:(id)a0;
- (id)elementKey;
- (void)setElementType:(unsigned int)a0;
- (unsigned int)elementType;

@end
