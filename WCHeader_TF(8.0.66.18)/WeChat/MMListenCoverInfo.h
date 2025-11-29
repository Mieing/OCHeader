@class NSString, NSMutableArray;

@interface MMListenCoverInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *covers;
@property (nonatomic) unsigned int showNum;
@property (retain, nonatomic) NSString *coverWording;
@property (retain, nonatomic) NSString *icon;

+ (void)initialize;

- (void)setIcon:(id)a0;
- (id)icon;
- (void)setCoverWording:(id)a0;
- (id)coverWording;
- (void)setShowNum:(unsigned int)a0;
- (unsigned int)showNum;
- (void)setCovers:(id)a0;
- (id)covers;
- (void)setType:(int)a0;
- (int)type;

@end
