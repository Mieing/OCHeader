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

@end
