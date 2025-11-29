@class FinderAdMbInfo, NSString, FinderAdLiteAppInfo, FinderAdPreMovieAdBaseInfo;

@interface FinderAdPreMovieAdInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderAdPreMovieAdBaseInfo *preMovieInfo;
@property (retain, nonatomic) NSString *crossPlatformBypData;
@property (retain, nonatomic) FinderAdLiteAppInfo *liteAppInfo;
@property (retain, nonatomic) FinderAdMbInfo *mbInfo;
@property (nonatomic) unsigned int displayType;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setDisplayType:(unsigned int)a0;
- (unsigned int)displayType;
- (void)setMbInfo:(id)a0;
- (id)mbInfo;
- (void)setLiteAppInfo:(id)a0;
- (id)liteAppInfo;
- (void)setCrossPlatformBypData:(id)a0;
- (id)crossPlatformBypData;
- (void)setPreMovieInfo:(id)a0;
- (id)preMovieInfo;
- (id)archivedWCTValue;

@end
