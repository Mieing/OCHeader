@class NSString, NSArray;

@interface DataAggrMetricsConfiguration : NSObject

@property (copy, nonatomic) NSString *metricsKey;
@property (copy, nonatomic) id /* block */ transformer;
@property (retain, nonatomic) NSArray *dimFields;
@property (retain, nonatomic) NSArray *aggrFields;

+ (id)aggrConfigWithKey:(id)a0 forFields:(id)a1 dimFields:(id)a2 transformer:(id /* block */)a3;

- (void).cxx_destruct;

@end
