@interface FinderLbsLifeConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int cgiType;
@property (nonatomic) BOOL displayReddot;
@property (nonatomic) unsigned int lbsDefaultTab;

+ (void)initialize;

- (void)setLbsDefaultTab:(unsigned int)a0;
- (unsigned int)lbsDefaultTab;
- (void)setDisplayReddot:(BOOL)a0;
- (BOOL)displayReddot;
- (void)setCgiType:(unsigned int)a0;
- (unsigned int)cgiType;

@end
