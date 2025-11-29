@class NSString;

@interface FinderObjectDynamicItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int name;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *richText;
@property (retain, nonatomic) NSString *key;

+ (id)mapKeyWithId:(int)a0 type:(int)a1;
+ (id)mapKeyWithKey:(id)a0 type:(int)a1;
+ (void)initialize;

- (void)setKey:(id)a0;
- (id)key;
- (void)setRichText:(id)a0;
- (id)richText;
- (void)setText:(id)a0;
- (id)text;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setName:(unsigned int)a0;
- (unsigned int)name;
- (id)mapKey;

@end
