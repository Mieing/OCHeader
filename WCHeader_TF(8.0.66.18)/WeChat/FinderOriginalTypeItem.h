@class NSString, OriginalMediaLimit, NSMutableArray, FinderLiteAppParam;

@interface FinderOriginalTypeItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int originalType;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *supportMediaTypes;
@property (retain, nonatomic) FinderLiteAppParam *jumpLiteApp;
@property (retain, nonatomic) OriginalMediaLimit *mediaLimit;

+ (void)initialize;

- (void)setMediaLimit:(id)a0;
- (id)mediaLimit;
- (void)setJumpLiteApp:(id)a0;
- (id)jumpLiteApp;
- (void)setSupportMediaTypes:(id)a0;
- (id)supportMediaTypes;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (void)setOriginalType:(unsigned int)a0;
- (unsigned int)originalType;

@end
