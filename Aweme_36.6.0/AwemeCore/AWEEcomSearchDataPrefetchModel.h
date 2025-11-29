@class NSString, NSDictionary, NSMutableArray;

@interface AWEEcomSearchDataPrefetchModel : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) unsigned long long prefetchType;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long expire;
@property (retain, nonatomic) NSMutableArray *results;
@property (copy, nonatomic) id /* block */ dataCallback;
@property (copy, nonatomic) id /* block */ removeModelCallback;

+ (id)modelWithKey:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
