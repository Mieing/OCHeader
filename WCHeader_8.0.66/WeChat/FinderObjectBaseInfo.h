@class NSString, NSData;

@interface FinderObjectBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned long long clientRecvTimeMs;
@property (nonatomic) unsigned long long clientExposeTimeMs;
@property (nonatomic) unsigned int clientExposeCount;
@property (retain, nonatomic) NSString *clientUdfKv;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) NSData *shareBypData;

+ (void)initialize;

- (void)setShareBypData:(id)a0;
- (id)shareBypData;
- (void)setEcSource:(id)a0;
- (id)ecSource;
- (void)setClientUdfKv:(id)a0;
- (id)clientUdfKv;
- (void)setClientExposeCount:(unsigned int)a0;
- (unsigned int)clientExposeCount;
- (void)setClientExposeTimeMs:(unsigned long long)a0;
- (unsigned long long)clientExposeTimeMs;
- (void)setClientRecvTimeMs:(unsigned long long)a0;
- (unsigned long long)clientRecvTimeMs;
- (void)setSessionBuffer:(id)a0;
- (id)sessionBuffer;
- (void)setId:(unsigned long long)a0;
- (unsigned long long)id;

@end
