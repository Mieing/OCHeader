@class NSString;

@interface NewLifeStartCdnDownloadReq : NSObject

@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long concurrentCount;
@property (copy, nonatomic) NSString *path;

+ (id)makeWithMediaId:(id)a0 url:(id)a1 concurrentCount:(long long)a2 path:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
