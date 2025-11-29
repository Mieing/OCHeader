@class NSString, NSDictionary;

@interface AWENearbyPollingTask : NSObject

@property (nonatomic) double interval;
@property (copy, nonatomic) NSString *reqPath;
@property (copy, nonatomic) NSDictionary *reqParams;
@property (nonatomic) long long pollingLimit;
@property (nonatomic) long long count;
@property (nonatomic) unsigned long long status;

- (void)pollWithInterval:(double)a0;
- (void)requestWithCompletion:(id /* block */)a0;
- (id)initWithInterval:(double)a0 reqPath:(id)a1 reqParams:(id)a2 limit:(long long)a3;
- (void)excecute;
- (void).cxx_destruct;
- (void)cancel;

@end
