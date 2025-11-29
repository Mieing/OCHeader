@class NSMutableArray;

@interface TabInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int tabScene;
@property (retain, nonatomic) NSMutableArray *layout;

+ (void)initialize;

- (void)setLayout:(id)a0;
- (id)layout;
- (void)setTabScene:(unsigned int)a0;
- (unsigned int)tabScene;

@end
