@class NSString;

@interface FinderTabInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) NSString *tabName;

+ (void)initialize;

- (void)setTabName:(id)a0;
- (id)tabName;
- (void)setDisplayTabType:(unsigned int)a0;
- (unsigned int)displayTabType;

@end
