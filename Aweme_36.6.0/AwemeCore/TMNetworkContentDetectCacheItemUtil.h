@interface TMNetworkContentDetectCacheItemUtil : NSObject

+ (id)stringWithoutEscapeCharactersFromString:(id)a0;
+ (id)stringArrayWithoutEscapeCharactersFromStringArray:(id)a0;
+ (void)setCertToken:(id)a0 forCache:(id)a1;
+ (id)certTokenForCache:(id)a0;
+ (void)removeCertTokenForCache:(id)a0;

@end
