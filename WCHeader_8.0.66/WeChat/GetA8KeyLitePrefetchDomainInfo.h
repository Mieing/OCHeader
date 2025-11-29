@class NSString, NSMutableArray;

@interface GetA8KeyLitePrefetchDomainInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *resDomains;
@property (retain, nonatomic) NSMutableArray *resInfos;
@property (nonatomic) unsigned int openType;

+ (void)initialize;

- (void)setOpenType:(unsigned int)a0;
- (unsigned int)openType;
- (void)setResInfos:(id)a0;
- (id)resInfos;
- (void)setResDomains:(id)a0;
- (id)resDomains;
- (void)setDomain:(id)a0;
- (id)domain;

@end
