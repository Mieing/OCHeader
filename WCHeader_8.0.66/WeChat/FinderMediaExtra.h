@class NSString, NSMutableArray;

@interface FinderMediaExtra : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *coverUrlWord;
@property (nonatomic) unsigned int isRealshoot;
@property (retain, nonatomic) NSMutableArray *shareCoverUrlWord;

+ (void)initialize;

- (void)setShareCoverUrlWord:(id)a0;
- (id)shareCoverUrlWord;
- (void)setIsRealshoot:(unsigned int)a0;
- (unsigned int)isRealshoot;
- (void)setCoverUrlWord:(id)a0;
- (id)coverUrlWord;
- (void)setText:(id)a0;
- (id)text;

@end
