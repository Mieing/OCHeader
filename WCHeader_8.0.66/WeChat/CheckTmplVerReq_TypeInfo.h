@class NSString, NSMutableArray;

@interface CheckTmplVerReq_TypeInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *fullVersions;
@property (retain, nonatomic) NSString *fullVersionInUse;
@property (nonatomic) unsigned long long controlFlag;

+ (void)initialize;

- (void)setControlFlag:(unsigned long long)a0;
- (unsigned long long)controlFlag;
- (void)setFullVersionInUse:(id)a0;
- (id)fullVersionInUse;
- (void)setFullVersions:(id)a0;
- (id)fullVersions;
- (void)setType:(int)a0;
- (int)type;

@end
