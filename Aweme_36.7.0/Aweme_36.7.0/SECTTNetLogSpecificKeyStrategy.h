@class SECTTNetPathConfig, NSString;
@protocol SECTTNetLogHandleStrategy;

@interface SECTTNetLogSpecificKeyStrategy : NSObject <SECTTNetLogHandleStrategy>

@property (retain, nonatomic) id<SECTTNetLogHandleStrategy> tagStrategy;
@property (retain, nonatomic) SECTTNetPathConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPathConfig:(id)a0;
- (id)reportableQueriesForURL:(id)a0;
- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)strategyName;

@end
