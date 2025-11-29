@class NSMutableArray;

@interface GameSimpleDnsControl : WXPBGeneratedMessage

@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL forceSimpleDns;
@property (retain, nonatomic) NSMutableArray *domainWhiteList;
@property (nonatomic) BOOL disableWeakNetUse;

+ (void)initialize;

- (void)setDisableWeakNetUse:(BOOL)a0;
- (BOOL)disableWeakNetUse;
- (void)setDomainWhiteList:(id)a0;
- (id)domainWhiteList;
- (void)setForceSimpleDns:(BOOL)a0;
- (BOOL)forceSimpleDns;
- (void)setDisable:(BOOL)a0;
- (BOOL)disable;

@end
