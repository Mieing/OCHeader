@class NSString;

@interface FinderExtendedReading : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int style;

+ (void)initialize;

- (void)setStyle:(unsigned int)a0;
- (unsigned int)style;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setLink:(id)a0;
- (id)link;

@end
