@class NSString, NSArray, NSURL, NSDictionary;

@interface PIASnapShotModel : NSObject

@property (nonatomic) long long sdk;
@property (nonatomic) long long expires;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL enforce;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *head;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSArray *sortedQueryKey;
@property (copy, nonatomic) NSDictionary *queryDictionary;

- (id)removeSnapshotComment:(id)a0;
- (id)queryJSONWithObject:(id)a0;
- (id)sortedQueryKeyWithQueryString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
