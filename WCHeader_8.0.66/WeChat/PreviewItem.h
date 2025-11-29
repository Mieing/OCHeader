@class NSString;

@interface PreviewItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *imageUrl;

+ (void)initialize;

- (void)setImageUrl:(id)a0;
- (id)imageUrl;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setId:(id)a0;
- (id)id;

@end
